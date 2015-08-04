# shboom_fts

Tom Torok's original ASP app for searching database tables, but with full-text support

### Introduction

Like original [Shboom](https://github.com/dwillis/shboom), ShboomFTS allows users to search MSSQL databases and adds support for any full-text indexes present. Tom explains: "ShboomFTS also creates results pages in which a user can double click on any word in the results. The double click creates a link that, when clicked, launches a new search on that word. (That works only in IE.) Also in ShboomFTS you can create an include file in which you can build values and selections for a pull down menu with a list of other related databases. So, if you search a voter database for a particular name, you can select a property or contributions database from the pulldown, double click on a word in the results and create a link on that word. When you click on the link, you'll launch a search for that word in the database selected. (IE only.) The IE only stuff is a limitation of the javascript I used. It probably can be tweaked to apply to all."

### FAQ

##### Does it still work?

Yes! From Tom: "I've recently written a number of Shbooms for The Philadelphia Inquirer. It's web based and I used the scripting engine for whatever is associated with Windows Explorer in Windows 7. The scripting engine of some versions of Firefox will take you to the end and produce nothing. That applies to writing pages only. The pages it writes work in all browsers for searches and more (more on that later). The latest version of MS SQL Server I tried it on was 2012 and it worked."

##### What do I need to find out?

MS SQL Server, probably something like IIS and ASP. Which you probably have CDs for somewhere.

##### Why are you doing this?

Because Shboom deserves to be remembered for what it was and the role it played in getting people involved in building software for newsrooms. Because so much of the early newsroom web development work has been lost or forgotten. Because as the first rough draft of history, journalism has a duty to preserve important things.

Also, as a way of saying thank you to a friend and colleague who was generous with his time and expertise.
