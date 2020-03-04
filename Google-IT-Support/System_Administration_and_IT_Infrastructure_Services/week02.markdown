# Network and Infrastructure Services

## Intro to IT Infrastructure Services

### What are IT IInfrastructure Services?

### The Role of IT Infrastucture Services in SysAdmin

### Types of IT INfrastructure Services

IaaS -> Infrastructure as a Service

Example Providers:

- Amazon EC2
- Linode
- Windows Azure
- Google Compute Engine

See:

[Side-by-side comparisons of IaaS service providers](https://www.techrepublic.com/blog/the-enterprise-cloud/side-by-side-comparisons-of-iaas-service-providers/)

NaaS -> Networking as a Service

See:

[Network as a service](https://en.wikipedia.org/wiki/Network_as_a_service)

SaaS -> Sofware as a Service

See:

[The 24 most popular cloud apps used at work](https://www.businessinsider.com/the-most-popular-cloud-apps-used-at-work-2015-8?r=DE&IR=T)

Examples:

- Microsoft 365
- Google G Suite

PaaS -> Platform as a Service

- Heroku
- Windows Azure
- Google App Engine

See:

[The Best Cloud Computing Services of 2020](https://www.business.com/categories/cloud-computing-services/)

Directory Services

- Windows AD
- Open LdAP

DaaS -> Directory as a Service

See:

- [Amazon Cloud Directory](https://aws.amazon.com/cloud-directory/)
- [JumpCloud: Cloud Directory Service](Cloud Directory Service)
- [Azure Active Directory](https://azure.microsoft.com/en-us/services/active-directory/)

<blockquote>
"By the end of this course you'll have the knowledge to set up the IT infrastructure for a small organization."
</blockquote>

### How do Qwiklabs Work?

## Physical Infrastructure Services

### Server Operating Systems

<blockquote>
Server Operating Systems
Regular operating systems that are optimized for server functionality
</blockquote>

See:

[Server Operating Systems](https://www.pcworld.idg.com.au/article/151491/server_operating_systems/)

### Virtualization

Why virtualization?

- Performance: Dedicated hardware will have better performance
- Cost: One server for many applications is cheaper than many smaller ones for each
- Maintenance: With virtual servers, migrating stopping and restarting servers is easier
- Points-of-Failure: with virtual servers the services are not bound to the machine they are running on and can be easily moved to another -> Backups

### Remote Access Revisited

OpenSSH - The most common remote access tool in Linux

Read:

- [OpenSSH](https://en.wikipedia.org/wiki/OpenSSH)
- [Windows: Remote Desktop Clients](https://docs.microsoft.com/en-us/windows-server/remote/remote-desktop-services/clients/remote-desktop-clients)
- [About Windows Remote Management](https://docs.microsoft.com/en-us/windows/win32/winrm/about-windows-remote-management?redirectedfrom=MSDN)
- [PuTTY](https://en.wikipedia.org/wiki/PuTTY)

## Network Services

### FTP, SFTP and TFTP

- FTP - File Transfer Protocol: a legacy way to transfer files, because unlike modern tools it offers no encryption.
- SFTP - Secure FTP: is FTP using SSH for encryption.
- TFTP - Trivial FTP does not even have authentication.
- PXE Boot - Preboot Execution Boot allows to boot into software that is available over the network. Here TFTP is often used.

Read:

- [Preboot Excetution Ennvironment](https://en.wikipedia.org/wiki/Preboot_Execution_Environment)
- [Comparison of FTP Client Software](https://en.wikipedia.org/wiki/Comparison_of_FTP_client_software)

### NTP

NTP -> Network Time Protocol

It is possible to use public NTP servers or to run your own.
Good practice is to have your own that your fleet connects to and synchronize that one with a puble NTP server.

### Network Support Services Revisited

<blockquote>
Intranet
An internal network inside the company; accessable if you're on a company's network
</blockquote>

<blockquote>
Proxiserver
Acts as an intermediary between a company's network and the Internet
</blockquote>

### DNS

<blockquote>
Domain Name System (DNS)
Maps human-understandable names to IP addresses
</blockquote>

### DNS for Web Servers

The DNS entry for a domain name can be managed by the Domain Name Registrar or by yourself.

In the first case they need the DNS settings and the IP address of the server.
In the second case, you need to setup an Authoritative DNS Server

### DNS for Internal Networks

A local hosts file can contain static mappings between IP addresses and Domain names.
In Linux this can be found at `/etc/hosts`.

A DNS server can provide mappings for all machines that are configured to use that DNS server.
It is possible to populate a DNS server with a directory service like Active Directory or LDAP.
Read:

- [The Top DNS Servers And What They Offer](https://blog.dnsimple.com/2015/02/top-dns-servers/)
- [BIND 9](https://www.isc.org/bind/)
- [dnsmasq](http://www.thekelleys.org.uk/dnsmasq/doc.html)
- [erldns](https://github.com/dnsimple/erldns)

### DHCP

DHCP -> Dynamic Host Configuration Protocol

Read:

[Comparison of DHCP server software](https://en.wikipedia.org/wiki/Comparison_of_DHCP_server_software)

## Troubleshooting Network Services

### Unable to Resolve a Hostname or Domain Name

Use `ping` and `nslookup`.

## Managing System Services

### What do Services Look Like in Action

Background Processes - Daemons - Services

<blockquote>
This means that the program doesn't need to interact with a user through a graphical interface or the command line interface to provide the necessary service.
</blockquote>

Interaction with services is usually done by configuration files.

<blockquote>
Services are usually configured to start, when the machine boots, so that if there's a power outage or a similar event that causes the machine to reboot, you won't need a system administrator to manually start the service.
</blockquote>

### Managing Services in Linux

    service ntp status

Will show the status of the network time protocol service in Ubuntu.

    sudo service ntp stop

Will stop the ntp service.

    sudo service ntp start

Will restart the ntp service again. Now it will also correct bigger discrepancies.

    sudo service ntp restart

Does the same as the previous two commands in one command.

[Network Time Protocol Daemon - Archwiki](https://wiki.archlinux.org/index.php/Network_Time_Protocol_daemon)

### Managing Services in Windows

Example: Windows Update Service

    Get-Service wuauserv

Displays the status of the Windows Update Service.

    Get-Service wuauserv | Format-List *

Will show additional information.
Every user can show the status of the service, only administrators can modify a service.

    Stop-Service wuauserv
    Start-Service wuauserv

Stops the service, starts it again.

    Get-Service

Will show all running services.

All of this is also possible in the GUI of the service management console.

### Configuring Services in Linux

<blockquote>
The configuration files for the installed services are located in the /etc directory.
</blockquote>

Example: vsftp

    sudo apt install vsftpd

<blockquote>
lftp
An ftp client program that allows us to connect to an ftp server.
</blockquote>

    lftp localhost

`/etc/vsftpd.conf`


    sudo vsftpd reload

Will reload the configuration file after it is changed.

### Configuring Services in Windows

`C:\inetpub` is the default directory for content served by the Windows webserver.


## Configuring Network Services

### Configuring DNS with Dnsmasq

First install dnsmasq:

    sudo apt install dnsmasq

or

    sudo pacman -S dnsmasq
    # start the service
    systemctl start dnsmasq
    # see the logs to check if the serivce is running
    journalctl -u dnsmasq.service

The basic configuration will provide a dns caching service.
Test it with:

    dig www.example.com @localhost

To run dnsmasq in debuggin mode:

    # first stop the service
    sudo service dnsmasq stop # on older systems
    # or
    sudo systemctl stop dnsmasq
    # run debug mode
    sudo dnsmasq -d -q

Now dig in another terminal window:

    dig www.example.com @localhost

And see the debug output of dnsmasq.

Sample host configuration:

    192.168.1.2 helium.local
    192.168.1.3 nitrogen.local
    192.168.1.4 oxygen.local

Saved as myhosts.txt
Used with:

   sudo dnsmasq -d -q -H myhosts.txt

### Configuring DHCP with dnsmasq


