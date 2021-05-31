# Directory Services

## Introduction to Directory Services

### What is a Directory Server?

<blockquote>
Directory Server
Contains a lookup service that provides mapping between network resources and their network addresses
</blockquote>

<blockquote>
Replication
The stored directory data can be copied and distributed across a number of distributed servers, but still appear as one, unified datastore for querying and administrating
</blockquote>

<blockquote>
Directory Services
Useful for organizing data and making it searchable for an organization
</blockquote>

Containers are refered to as Organizazional Units (OUs) and contain other containers or objects.

Necessary tasks:

- Setup
- Configuration
- Maintenance

### Implementing Directory Services

#### Open Standards

- Directory Access Protocol (DAP)
- Directory System Protocol (DSP)
- Directory Information Shadowing Protocol (DISP)
- Directory Operational Bindings Management Protocol (DOP)


- x.500 in 1988 - Directory Standard

- Lightweight Directory Access Protocol (LDAP)

#### Implementations

- Active Directory (AD)
- OpenLDAP
- Active Directory Users and Computers (ADUC)

## Centralized Management

### What is centralized management?

<blockquote>
Centralized management
A centralized service that provides instructions to all of the different parts of my IT infrastructure
</blockquote>

<blockquote>
Directory services provide centralized authentication, authorization, and accounting, also known as AAA.
</blockquote>

!["Diagram of the relationship between Identities, Roles, and Resources"](./IdentitiesRolesResources.png)

Role Based Access Control - RBAC

Logon Scripts are an easy way of configuring client devices based on roles.

Read:

- [Role-based access control](https://en.wikipedia.org/wiki/Role-based_access_control)
- [Chef](https://www.chef.io/products/chef-infra/)
- [puppet](https://puppet.com/)
- [MS: What is Configuration Manager?](https://docs.microsoft.com/en-us/configmgr/core/understand/introduction)

## LDAP

### What is LDAP?

<blockquote>
Lightweight Directory Access Protocol (LDAP)
Used to access information in directory services over a network
</blockquote>

- Active Directory
- OpenLDAP

Example of an LDAP entry:

`dn: CN=Devan Sri-Tharan,OU=Sysadmin,DC=example,DC=com`

- dn: Distinguished name
- CN: Common name of the object
- OU: Organizational unit such as a group
- DC: Domain component, the domain example.com is split into the components example and com

[LDAP Data Interchange Format](https://en.wikipedia.org/wiki/LDAP_Data_Interchange_Format)

### What is LDAP Authentication?

!["A visualization of the LDAP Authentication process"](LDAP-Authentication.png)

#### Three ways to authenticate

- Anonymous: No authentication at all
- Simple: Username and password in plaintext
- SASL (Simple Authentication and Security Layer): TLS encrypted, using another authentication method, like Kerberos

<blockquote>
Kerberos
A network authentication protocol that's used to authenticate user identity, secure the transfer of user credentials, and more
</blockquote>



[What Is Kerberos Authentication?](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2003/cc780469(v=ws.10)?redirectedfrom=MSDN)

## Active Directory

### What is Active Directory?

Active Directory Administrative Center (ADAC)

Domain is usually the top node in an AD structure, but Domains are themselves part of a forest. A group of Domains, that can share resources in the same forest.

Domain Controllers (DCs) host a (read-write) replica of the AD database, and GPOs. They serve as DNS service and provide Service Discovery. They provide authentication via Kerberos.

Changes to AD from a DC are usually done in the order they come in. This opens up the possibility of conflicts. For operations where this should not happen at all a single DC will be tasked with these kind of changes, known as Flexible Single-Master Operations (FISMO).

[Managing Flexible Single-Master Operations](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-2000-server/cc961936(v=technet.10)?redirectedfrom=MSDN)

### Managing Active Directory

Domain Admins are the administrators of the complete Domain.

Enterprise Admins are Domain Administrators with the additional right to control the whole forest.

Domain Admin accounts should not be used for all daily tasks, but only for administering AD.

### Managing Active Directory Users and Groups

Managing User Account Lifecycle

Security Account Manager- SAM
 
User SamAccountName

ADAC has as PowerShell history pane that shows everything that is done in ADAC as its PowerShell commmand.

#### Group Types

Security Groups are used to grant or restrict access.

Distribution Groups are used for Email Communication and are not used for access granting.

#### Group Scope

- Domain Local: Used to assign permission to a resource.
- Global: Used to group accounts into a role.
- Universal: Used to group global groups in a forest.

Example:

A researchers group (Global Group) that will use a research share readers group (Domain Local) and a research share writers groups (also Domain Local) to give access to the share destined to use for researchers.

Read:

- [Group scope](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2003/cc755692(v=ws.10)?redirectedfrom=MSDN)
- [What Are Security Principals?](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2003/cc780957(v=ws.10)?redirectedfrom=MSDN)

### Managing Active Directory User Passwords

AD does not store the passwords, but only one way cryptographic passwords.

<blockquote>
If there's more than one person who can authenticate using the same username and password, then auditing becomes diffcult or even impossible.
</blockquote>

### EFS

If users use EFS to encrypt their storage devices, a password reset might lock them out of these encrypted devices.

<a href="https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-2000-server/cc962100(v=technet.10)?redirectedfrom=MSDN">Features of EFS</a>

### Joining an Active Directory Domain

Joining AD:

- AD has knowledge of the computer and has provisioned a computer account for it.
- The computer knows about the Active Directory Domain and authenticates with it.

Workgroups are a collection of standalone computers that work together. A computer that is not joined to a domain is a workgroup computer.

Adding a computer to a domain with PowerShell:

    Add-Computer -DomainName 'example.com' -Server 'dc1'


The "-restart" parameter will trigger a restart after joining the domain.

To see the functional levels of the forest and the domain:

    Get-ADForest

and

    Get-ADDomain

This will show which AD features are supported.

Read more about that here:

<a href="https://docs.microsoft.com/en-us/windows-server/identity/ad-ds/active-directory-functional-levels">Forest and Domain Functional Levels</a>

### What is Group Policy

<blockquote>
Group Policy Object
A set of policies and preferences that can be applied to a group of objects in the directory
</blockquote>

Group policies have to be **linked** to start working.

<blockquote>
When you **link** a GPO, all of the computers or users under that domain, site, or OU will have that policy applied.
</blockquote>

The application scope can be modified by *Security filtering* and *WMI Filtering*.

<blockquote>
A Group Policy Object can contain **computer configuration, user configuration,** or both.
</blockquote>

**Computer Configuration** is applied every time a computer signs into AD (that is every time it boots into Windows, as long as it is connected to the network).

**User Configuration** is applied when a user logs on into the computer.

Once the GPO is in place, it is checked and enforced every few minutes.

![Diagram of GPO flow](./week04-gpo.png)

#### Difference between Policies and Preferences

<blockquote>
Policies
Settings that are reapplied every few minutes, and aren't meant to be changed even by the local administrators
</blockquote>

By default Policies are reapplied every 90 minutes.

<blockquote>
Group policy preferences
Settings that, in many cases, are meant to be a template for settings
</blockquote>

GPO settings are mostly stored in the Windows Registry

<blockquote>
Windows Registry
A hierarchical database of settings that Windows, and many Windows applications, use for storing configuration data
</blockquote>

### Group Policy Creation and Editing

GPMC = Group Policy Management Console

In the Tools of Server Manager or gpmc.msc in CMD.

WMI = Windows Management Instrumentation
WMI Filters allow to target specific computers.
Group Policy Results: check which policies are already applied.
Group Policy Modeling: Show the policies that will be applied to a computer.

Domains, Sites and OU can be linked to by Group Policy Objects.

### Group Policy Inheritance and Precedence

Example:

Excel Macros are disabled for all users, but some departments like finance need them so they get a different GP.

<blockquote>
When a computer is processing the Group Policy Objects that apply to it, all of these policies will be applied in **precedence** rules.
</blockquote>

The more general rules are applied first and the last apllied rule in case of contradicting rules is the one that will be effective in the end.

RSOP - Resultant set of policy

RSOP Reports are used to check the policies of an object.

The RSOP report will be generated remotely from the computer it is about, so that needs to be switched on and connected to the network.

### Group Policy Troubleshooting

SRV records:
´´´
Resolve-DNSName -Type SRV -Name _ldap._tcp.dc._msdcs.DOMAIN.NAME
´´´

Time differences might prevent a computer from authenticating with AD, because Kerberos, the authentication protocol used for AD checks for that.
It is possible to resync the time with this command:

´´´
w32tm/resync
´´´

<blockquote>
A common issue that you might have to troubleshoot is when a GPO-defined policy or preference fails to apply to a computer.
</blockquote>

Fast Logon Optimization might prevent some policies to be applied to make logon faster.
Policies are also not usually applied full, but only the changes.

´´´
gpupdate /force /snyc
´´´

Will force an update of all policies, but it might take a while.
"/sync" will also force a restart.

Replication failure is also a common failure.

´´´
$env:LOGONSERVER
´´´
in PS, will show the server that the computer is authenticated to.

or

´´´
%LOGONSERVER%
´´´

in CMD.

´´´
gpresult /R
´´´

will generate a report and 

´´´
gpresult /H result.html
´´´

will generate a more complete result as an html page.

Look for ACLs and wmi filters.

### Reading for GPO Troubleshooting

- [How the Windows Time Service Works](https://docs.microsoft.com/en-us/windows-server/networking/windows-time-service/How-the-Windows-Time-Service-Works)
- [W32tm](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-xp/bb491016(v=technet.10\))
- [Troubleshooting Active Directory—Related DNS Problems](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-2000-server/bb727055(v=technet.10\)?redirectedfrom=MSDN)
- [Control the Scope of Group Policy Objects](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2008-R2-and-2008/cc772166(v=ws.11\))
- [Check Group Policy Infrastructure Status](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2012-R2-and-2012/jj134176(v=ws.11\)?redirectedfrom=MSDN)
- [Gpresult](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2012-R2-and-2012/cc733160(v=ws.11\)?redirectedfrom=MSDN)
- [Create a WMI Filter](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2008-R2-and-2008/cc770562(v=ws.11\)?redirectedfrom=MSDN)
### Mobile Device Management (MDM)

- [Complete MDM payload list for Apple devices](https://support.apple.com/guide/mdm/complete-payload-list-mdm5370d089/web)
- [Apply settings for Android mobile devices](https://support.google.com/a/answer/6328708#apply)
- [Intro to Profile Manager](https://support.apple.com/guide/server/intro-to-profile-manager-apd0e2214c6/mac)
- [Set up advanced mobile management](https://support.google.com/a/answer/7396025)

### OpenLDAP

PHP LDAP Admin is like the Windows AD GUI.
Packages in Ubuntu are "slapd ldap-utils"
dpkg-reconfigure slapd reconfigures slapd in Debian based systems.

#### Reading

- [How To Install and Configure OpenLDAP and phpLDAPadmin on Ubuntu 16.04](https://www.digitalocean.com/community/tutorials/how-to-install-and-configure-openldap-and-phpldapadmin-on-ubuntu-16-04)
- [5. Configuring slapd](https://www.openldap.org/doc/admin24/slapdconf2.html)

#### Managing OpenLDAP

LDIF is a text file that contains LDAP configuration.

<blockquote>
ldapadd
Takes the input of an LDIF file and adds the context of the files.
</blockquote>

<blockquote>
ldapmodify
Modifies an existing object
</blockquote>

<blockquote>
ldapdelete
Will remove the object that the LDIF file refers to
</blockquote>

<blockquote>
ldapsearch
Will search for entries in your directory database
</blockquote>


