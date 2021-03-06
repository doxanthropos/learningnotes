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




