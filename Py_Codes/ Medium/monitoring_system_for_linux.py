from __future__ import print_function
import psutil
import os

print("Host name : ", psutil.users()[0].name)
print("CPU Usage : ", str(psutil.cpu_percent(interval=1)))
print("RAM Usage : ", str(psutil.virtual_memory().percent))
print("Disk Usage : ", str(psutil.disk_usage('/').percent))
print("Last checked at : ", curretn_time = str(datetime.datetime.now()))
os.system("last > temp.log")
f = open("temp.log", "r")
print(f.read())
