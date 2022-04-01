#pip env remove py38
from bs4 import BeautifulSoup
from bs4.element import Tag
import requests
import json

r = requests.get("https://www.fcu.edu.tw/announcements/")

soup = BeautifulSoup(r.text, "html.parser")
news_list = soup.find_all(class_="a-news-list__main")
data = []
#print(news_list[0])

for news in news_list:
    category = news.find(class_="a-news-list__category").text
    date = news.find(class_="a-news-list__date").text.strip()

    unit = news.find(class_="a-news-list__unit").span.text

    title = news.find(class_="a-news-list__title").text
    url = news.find(class_="a-news-list__title").get("href")

    print(category, date, unit, title, url, sep=" | ")

    data.append({
        "date": date, "category": category, "unit": unit,
        "title": title, "url": url
    })

with open("result.json", "w+") as f:
    json.dump(data, f, ensure_ascii=False, indent=4)
