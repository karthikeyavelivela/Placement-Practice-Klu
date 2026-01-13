import requests, time

url = "https://github.com/karthikeyavelivela"

for i in range(30):
    r = requests.get(url)
    print(i+1, r.status_code)
    time.sleep(0.1)
