# Software and Platform Services

## Software Services

### Module Introduction

<blockquote>
Software Services
Services that employees use that allow them to do their daily job functions
</blockquote>

<blockquote>
Platform Services
Provide a platform for developers to code, built and manage software applications
</blockquote>

### Configuring Communication Services

IRC - Internet Relay Chat (Wish that was still a thing)

- Hipchat
- Slack

XMPP - > Still a nice protocoll (Pidgion, Adium)

Read:

- [The 12 Best Team Chat Apps for Your Company](https://zapier.com/blog/best-team-chat-app/)
- [Jabber/XMPP Clients](https://jabber.at/clients/?os=any)

### Configuring Email Services

A - Record -> Hostnames
MX -> Mail Exchange Record

- POP3: Emails get deleted when downloaded. Benefits: uses less space, privacy by not keeping data
- IMAP: Most popular
- SMTP: The only protocol for sending email

Read:

- [Why You May Not Want To Run Your Own Mail Server](https://www.digitalocean.com/community/tutorials/why-you-may-not-want-to-run-your-own-mail-server)
- [Email Protocols Explained](https://blog.servermania.com/what-protocols-send-receive-email-with-the-mail-server/)

### Configuring User Productivity Services

<blockquote>
When considering software licences, it's important to review the terms and agreements.
</blockquote>

Software used as a consumer won't be the same as software used as a business.

### Configuring Security Services

## File Services

### What are File Services?

Network shares, cloud storage provides.

Read:

[Cloud Storage Comparison 2020](https://www.cloudwards.net/comparison/)

### Network File Storage

<blockquote>
Network File System (NFS)
A protocol that enables files to be shared over a network
</blockquote>

Samba is similar to NFS, but better suited to Windows.

What about DFS?

Read:

- SMB: [Server Message Block Overview](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2012-R2-and-2012/hh831795(v=ws.11)?redirectedfrom=MSDNA)
- [Introduction to NFS Utilities](http://www.linuxfromscratch.org/blfs/view/cvs/basicnet/nfs-utils.html)

### Mobile Synchronization

- [Back up or restore data on your Android device](https://support.google.com/android/answer/2819582?hl=en)
- [https://support.apple.com/en-us/HT203977#icloud](https://support.apple.com/en-us/HT203977#icloud)

## Print Services

### Configuring Print Services

CUPS - Common UNIX Printing System

Automatically installing printers? Maybe based on Room number?

Read:

- [Inkjet printing](https://en.wikipedia.org/wiki/Inkjet_printing)
- [How Inkjet Printers Work](https://computer.howstuffworks.com/inkjet-printer.htm)
- [Laser printing](https://en.wikipedia.org/wiki/Laser_printing)
- [How Laser Printers Work](https://computer.howstuffworks.com/laser-printer.htm)
- [Dot matrix printer](https://en.wikipedia.org/wiki/Dot_matrix_printer)
- [Thermal printing](https://en.wikipedia.org/wiki/Thermal_printing)
- [3D printing](https://en.wikipedia.org/wiki/3D_printing)
- [3D printing processes](https://en.wikipedia.org/wiki/3D_printing_processes)
- [The 9 Different Types of 3D Printers](https://3dinsider.com/3d-printer-types/)
- [Windows 10: View the print queue](https://support.microsoft.com/en-us/help/4027370/windows-10-view-the-print-queue)
- [MacOS: Use the Dock on your Mac to check on a printer or print job](https://support.apple.com/guide/mac-help/dock-mac-check-a-printer-print-job-mchle453335f/mac)
- [Ubuntu: Cancel, pause or release a print job](https://help.ubuntu.com/stable/ubuntu-help/printing-cancel-job.html)
- [How to set a default printer in Windows 10](https://support.microsoft.com/en-us/help/4028622/windows-10-how-to-set-a-default-printer)
- [Change the default printer or a printer’s name on your Mac](https://support.apple.com/guide/mac-help/change-default-printer-a-printers-mac-mchlp1036/mac)
- [Ubuntu: Set the default printer](https://help.ubuntu.com/stable/ubuntu-help/printing-setup-default-printer.html)
- [Install a printer in Windows 10](https://support.microsoft.com/en-us/help/4015386/windows-10-install-printer)
- [Add a printer on Mac](https://support.apple.com/guide/mac-help/add-a-printer-on-mac-mh14004/mac)
- [Use your Mac to print to a printer connected to a Windows computer](https://support.apple.com/guide/mac-help/mac-print-a-printer-connected-windows-mchlp2437/mac)
- [Ubuntu: Printing](https://help.ubuntu.com/stable/ubuntu-help/printing.html)
- [Microsoft XPS Document Writer (MXDW)](https://docs.microsoft.com/en-us/windows/win32/printdocs/microsoft-xps-document-writer)
- [Save a document as a PDF on Mac](https://support.apple.com/guide/mac-help/save-a-document-as-a-pdf-on-mac-mchlp1531/mac)
- [Ubuntu: Print to file](https://help.ubuntu.com/stable/ubuntu-help/printing-to-file.html)
- [Windows 10: Share your network printer](https://support.microsoft.com/en-us/help/4089224/windows-10-share-network-printer)
- [Share your printer on Mac](https://support.apple.com/guide/mac-help/share-your-printer-on-mac-mchlp2424/mac)
- [Network Printing With Ubuntu](https://help.ubuntu.com/community/NetworkPrintingWithUbuntu)
- [Windows: Print and Document Services Overview](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2012-r2-and-2012/hh831468(v=ws.11))
- [CUPS - Print Server](https://help.ubuntu.com/lts/serverguide/cups.html)

## Platform Services

### Web Servers Revisited

Install Apache in Ubuntu:

    sudo apt-get install apache2 -y

Read:

[Apache HTTP Server vs Microsoft IIS vs nginx](https://stackshare.io/stackups/apache-httpd-vs-microsoft-iis-vs-nginx)

### What is a Database Server?

<blockquote>
Database
Allows us to store, query, filte, and manage large amounts of data
</blockquote>

Job: Database Administrator

Read:

- [Database Administrators](https://www.bls.gov/ooh/computer-and-information-technology/database-administrators.htm)
- [SQLite vs MySQL vs PostgreSQL: A Comparison Of Relational Database Management Systems](https://www.digitalocean.com/community/tutorials/sqlite-vs-mysql-vs-postgresql-a-comparison-of-relational-database-management-systems)

[Apache Documentation](https://httpd.apache.org/docs/current/)

## Troubleshooting Platform Services

### Is the Website Down?

#### HTTP Status Codes

<blockquote>
HTTP status codes are codes or numbers that indicate some sort of error or info messages that occurred when trying to access a web resource.
</blockquote>

These status codes can be found in the developer tools of the webbrowser.

4xx indicate issues on the client side.
5xx indicate issues on the server side.
2xx indicate success.

Read:

- [Chrome DevTools](https://developers.google.com/web/tools/chrome-devtools?utm_source=dcc&utm_medium=redirect&utm_campaign=2018Q2)
- [Firefox Developer Tools](https://developer.mozilla.org/en-US/docs/Tools)
- [List of HTTP status codes](https://en.wikipedia.org/wiki/List_of_HTTP_status_codes)

## Managing Cloud Services

### Cloud Concepts

<blockquote>
Software as a Service (SaaS)
The software is already preconfigured and the user isn't deeply involved in the cloud configuration.
</blockquote>

<blockquote>
Infratructure as a Service (IaaS)
You're hosting your own services in the cloud. You need to decide how you want the infrastructure to look depending on what you want to run on it
</blockquote>

<blockquote>
Region
A geographic location containing a number of data centers
</blockquote>

<blockquote>
If one of them fails for some reason, the other are still available and services can be migrated without visibly affecting users
</blockquote>

<blocquote>
Public Cloud
Cloud services provided to you by a third party
</blockquote>

<blockquote>
Private Cloud
When your company owns the services and the rest of your infrastucture - wether on-site or in a remote data center
</blockquote>

<blockquote>
Hybrid Cloud
A mixture of both public and private clouds
</blockquote>

### Typical Cloud Infrastructure Setups

<blockquote>
Load Balancer
Enusres that each VM receives a balanced number of queries
</blockquote>

<blockquote>
Autoscaling
It allows the service to increase or reduce capacity as needed, while the service owner only pays for the cost of the machines that are in use a any given time
</blockquote>

### When and How to Choose Cloud

#### Pros

- Only temporary use
- Variing need
- Geographical location

#### Cons

- Cloud lock in

### Read:

- [Microsoft Azure: What is cloud computing?](https://azure.microsoft.com/en-us/overview/what-is-cloud-computing/)
- [AWS: Getting Started Resource Center](https://aws.amazon.com/getting-started/)
- [Google Cloud Platform Overview](https://cloud.google.com/docs/overview/)

