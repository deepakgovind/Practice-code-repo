#Using Nmap with Metasploit Framework!

systemctl start postgresql #Setting a db for metasploit
msfconsole #Open metasploit
db_nmap -h #list of commands for nmap in msf

#now all set run namp as usual
db_nmap -vv -A -T5 -Pn <ip add> -n 

#after finding vuln use msf to exlpoit!

#HAPPY Hacking!
