import time
from selenium import webdriver
from bs4 import BeautifulSoup

# open driver
print("Loading chrome driver...")
options = webdriver.ChromeOptions()
options.add_argument('headless')
options.add_argument('window-size=1920x1080')
options.add_argument('disable-gpu')
driver = webdriver.Chrome(
    '/Applications/Google Chrome.app/chromedriver',
    options=options
)
driver.implicitly_wait(3)

# # login
# print("Log in...")
# driver.get('https://www.acmicpc.net/login')
# driver.find_element_by_name('login_user_id').send_keys('naldo')
# driver.find_element_by_name('login_password').send_keys('dlatlqlqjs!@#')
# driver.find_element_by_id('submit_button').click()
# time.sleep(3)

print('#, 시간 제한, 메모리 제한, 제출, 정답, 맞은 사람, 정답 비율')
# print('#, 성공 여부, 시간 제한, 메모리 제한, 제출, 정답, 맞은 사람, 정답 비율')
for i in range(1000, 18221):
    url = 'https://www.acmicpc.net/problem/%s' % i
    driver.get(url)
    html = driver.page_source
    soup = BeautifulSoup(html, 'html.parser')
    succ = len(soup.select('.label-success')) > 0
    tds = soup.select('table#problem-info td')
    print(i, end = '')
    # print('%d, %s' % (i, succ), end = '')
    for td in tds:
        text = td.get_text()
        print(', %s' % text, end = '')
    print()
