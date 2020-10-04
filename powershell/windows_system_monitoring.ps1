#This program will send a dictionary of parameters like cpu_usage, ram_usage, time_stamp, cpu_usage and host_name of windows system every 5 second to the server at $url;


$totalRam = (Get-CimInstance Win32_PhysicalMemory | Measure-Object -Property capacity -Sum).Sum
$url=""
while($true) {
    $date = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
    $cpuTime = (Get-Counter '\Processor(_Total)\% Processor Time').CounterSamples.CookedValue.ToString("#,0.000")+'%'
    $availMem = (Get-Counter '\Memory\Available MBytes').CounterSamples.CookedValue
    $Ram_Usage = (100-104857600 * $availMem / $totalRam).ToString("#,0.0") + '%'
    $diskUsage =  Get-CimInstance -Class CIM_LogicalDisk | Select-Object @{Name="Free (%)";Expression={"{0,6:P0}" -f(($_.freespace/1gb) / ($_.size/1gb))}}, DriveType | Where-Object DriveType -EQ '3' | Select-Object -ExpandProperty "Free (%)"
    $body= "{'host_name'= $env:computername, 'cpu_usage'= $cpuTime, 'disk_usage'= $diskUsage, 'ram_usage'= $Ram_Usag, 'time-stamp'= $date}"
    Invoke-WebRequest -Uri $url -ContentType "application/json" -Method Post -Body $body
    Start-Sleep -s 5
}
