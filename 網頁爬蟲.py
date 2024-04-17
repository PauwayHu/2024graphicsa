import requests
import bs4
import random
import time
import csv

def job_list(url):
    global company_job
    global n
    global flag,p
    htmlFile = requests.get(url)
    objSoup = bs4.BeautifulSoup(htmlFile.text,'lxml')
    jobs = objSoup.find_all('article',class_='js-job-item')
    for job in jobs:
        cop_name=job.get('data-cust-name')
        job_name=job.get('data-job-name')
        dict1={"編號":n,"公司名稱":cop_name,"職務名稱":job_name}
        print("編號 : ",n)
        print("公司名稱 : ", cop_name)
        print("職務名稱 : ", job_name)
        company_job.append(dict1)
        n=n+1
        if n>50:
            flag=1
            break
    return flag

def write_to_csv():
    f_name="104_job_homework_A3.csv"
    with open(f_name,"w",newline="",encoding="cp950",errors="ignore") as csvFile:
        fields=["編號","公司名稱","職務名稱"]
        dictWriter=csv.DictWriter(csvFile, fieldnames=fields)
        dictWriter.writeheader()
        for row in company_job:
            dictWriter.writerow(row)
    csvFile.close()
    
def main():
    global flag,p
    urls = ['https://www.104.com.tw/jobs/search/?ro=0&kwop=7&keyword=Python&expansionType=area%2Cspec%2Ccom%2Cjob%2Cwf%2Cwktm&order=15&asc=0&page=13&mode=s&langFlag=0&langStatus=0&recommendJob=1&hotJob=1',
            'https://www.104.com.tw/jobs/search/?ro=0&kwop=7&keyword=Python&expansionType=area%2Cspec%2Ccom%2Cjob%2Cwf%2Cwktm&order=15&asc=0&page=25&mode=s&langFlag=0&langStatus=0&recommendJob=1&hotJob=1',
            'https://www.104.com.tw/jobs/search/?ro=0&kwop=7&keyword=Python&expansionType=area%2Cspec%2Ccom%2Cjob%2Cwf%2Cwktm&order=15&asc=0&page=35&mode=s&langFlag=0&langStatus=0&recommendJob=1&hotJob=1']
    
    for url in urls:
        print('-'*50)
        print('   page '+str(p))
        print('-'*50)
        if flag==0:
            flag=job_list(url)
            time.sleep(random.randint(3, 5))
            p=p+1
    write_to_csv()
    
n=1
flag=0
p=1
company_job=[]
main()