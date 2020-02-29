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

