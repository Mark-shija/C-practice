## What I Have gained in Javascript DOM 
* To select using querySelector method.
* How to add, remove and modify elements on the fly.

### querySelector method
* in javascript the method is very usefull to select an Id with #symbol, class by using .symbol and tag name by specifying its tagName.

Example:
<span class="title" id = "header">My Title</span>

document.querySelector('.title');
// returns first element with title class or null if not found

document.querySelector('#header');
// returns element with header ID or null if not found

document.querySelector('span');
// returns the first span element or null if none exist
