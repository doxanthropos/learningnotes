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


