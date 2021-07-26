# System Administration Consultation

## Software Company

For Funsize Company, one of the main improvement goals and challenges is to change the rather unstructured procedured into more defined ones. The lack or revenue is a limiting factor to consider, but as the company is producing open source software, they might be more open to using open source solutions than others.

### Purchasing

The first improvement would be the computer purchasing process.

Instead of waiting for the input of the new employee before even ordering a laptop, we could evaluate from the experiences of the existing employees, which computers might be good for which type of position. At first I would assume the 4 mentioned types of employees to have different needs and then try to find out, either by a small survey or even through conversation (100 people is not that much to talk to if the goal is a big improvement). Based on the answers, we could then start preordering these computers at the moment a position is opened, which will be a lot earlier, than the actual hiring. We would also have at most 4 different types of computers, maybe less, if the needs of some groups overlap. It could be that for example the needs of the designers overlap with those of the developers and those of the HR person with those of the sales people.

With these fixed computer types, the research, which actual computer to buy will be a lot less time consuming, because it is not a new computer every time and also lead to better prices, if we find a provider that gives us a better price if we buy regularly and the same devices. Of course this will be done by IT, so the buying decision and negotiantion is in the hands of someone who will know about the hardware and who will be the person supporting these devices in the future.

This future support will be easier, if there are more similar devices.

### Directory Services

To be able to manage user accounts and services we will need a directory service. This will allow us to have a better overview about the assets that are used and also to configure them easier. Considering this company is about open source, probably OpenLDAP would be the fitting solution. It would be less costly than for example an expensive AzureAD subscription or an on-prem AD, but like usual for self-hosted, on-prem solutions, it would put more responsibility in the hands of the companies own IT. While this step seems necessary, it is good to keep an eye on the time budget that I as the only IT person at the moment have.

### Computer Installation

To be able to support all those people at all, we would need a standardaized installation process and a standardized choice of OS versions. This could be prepared in the same step, where we evaluate the computer experiences of the existing employees. It might be that we end up with three different operating systems (MacOS for the designers, GNU/Linux for the devlopers and Windows for the Sales and HR people, to name some stereotypes), but it should not be more than that. For each of them, we could prepare an installation image or process that will be standard for the 4 job roles and allow us to have the computer configured and ready to work on the first day of the new employee or on the first day, an existing employee needs a replacement. This will also allow us to make the following two improvments.

### Encryption

Since the devices are at the moment all self set up, there is either no disk encryption in place or it is done individually by some employees. This is a recipy for disaster. With installation done by IT in a standardized process, encrypting te devices and storing the encryption keys in OpenLDAP is possible. This will protect the content of the devices in case they are lost or stolen and enable us to retrieve it, even when the employee has left the company.

### Backups

There is no mention of backups in the description and the individual install make it highly possible, there is no company wide policy or even system that is used for backup. While the cloud services that are used provide somewhat of a cloud backup, we should not rely entirely on them for the security of our important data. Thus we will need at least another backup location, maybe a storage server in the same server space, where we host the LDAP. Since humans are prone to forget or delay important issues, we would want to have a backup software configured on the laptops, that will do these backups automatically.

## Sales Company

### Software Installation

The installation of the sales software seems to be more cumbersome than it needs to be. If possible, I would like to automate that. Depending on the software in question, it might be possible to create an installation image, an installation script, or to use Group Polices that trigger the installation via Active Directory. This would reduce the time spend on installation a lot.

### Ticket System

While at the moment, the number of employees to support, might be doable using the personal email approach, this way of handling IT requests does not scale very well. Therefore we need to install a ticketing system and introduce the colleagues to it. It will help in prioritizing, when the workload is high and in case we grow and the IT department grows with it, it would help in task delegation. Additionaly a ticket system provides a good source of accumulated knowledge about the quality of IT and can be used to improve our work.

### Consider the Cloud

Since we are rapidly growing and probably have a lot of traveling people, we might consider moving some of the services we use into the cloud.
This will reduce the maintenance time and improve the access our employees have, as cloud solutions are typically a lot better at beeing available around the world, around the clock, then self hosted solutions.

### Online Storage

With a move to the cloud in some areas we could consider changing the network file server to a cloud service, this will be a first step into having something like a backup.

## File Server Structure

Having an unstructured file server might work for a small company, but I would assume that even at this size data is regularly lost due to mistakes. One part of solving this problem would be a backup solution, like mentioned before, but another one would be to create a predefined structure on the file server based on the companies processes. Instead of each employee managing their own files in their own way, we should have dedicated places for different kinds of files: invoices, contracts, marketing material. The access to these folders can then be regulated based on the needs and using a least privilage methodology. This will not only prevent some accidental loss, but also help the sales people streamline their working procedures, they will know where to find the data they need, without having to ask their colleagues where they put it.

### Growing Pains

With such a big growth ahead, it might not be feasable to do the introduction to the companies system all by myself. Therefore I would suggest to strategies: hiring another IT person, so the capability to handle requests gets doubled, as will the requests, if the employee number is doubled.
The other strategy would be to put a lot of what it explained to the new hires into an online course that they can work through on themselves.

## Non-Profit Company

### Computers

As with the first company, I would try to find the necessary specifications of the computes used in the company and try to move the purchasing date to the point in time, when a position is agreed on, before the actual hiring takes place. This will not mean having a big stock, but having the needed computer ready, once the person is hired.

### Messaging System

Not having a messaging system in place means that the employees will probably use WhatsApp or a similar software for this purpose, which might get us into big legal troubles, if we are operating in the EU or another legal area, where data protection is enforced. So I would try to find a messaging solution that fits our needs. XMPP or MS Teams or something in between might be feasible.

### Installation

Since we are already using Active Directory, we can use that to speed up the installation process. Some of the software installation as well as mapping the file server can be configured through Group Policy. This will reduce time and make sure the configuration is correct on every device.

### User Management

As an active Active Directory user might be used to gain access to the companies data, we will from now on make sure that leaving employees are diabled in AD.

### Ticketing System

Having a ticketing system is good for the reasons mentioned at the 2nd company, but this one does not seem to do its job. As it is an open source system, it might be possible to find a better configuration that does not confuse its users and actually does its job. But if that is not possible and we do not have the money for a better alternative, we might manage better without one. The personal email approach that was more of a problem with the previous company might serve well here as we are quite small and do not intend to grow that much. For common questions, a FAQ page should be established, that will provide the basis of a solid level 0 support.

### Company Website

Since the company website seems to be a static html site, professional hosting would be quite cheap and could even be free with some providers. These weill have a better uptime. The question how to manage this website should be part of the aforementioned FAQ.
