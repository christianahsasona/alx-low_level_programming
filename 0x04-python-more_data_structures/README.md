<h1>PYTHON : MORE DATA STRUCTURES</h1>
<hr>
<p>This describes some things you’ve learned about already in more detail, and adds some new things as well.</p>
<ul>
<li>list.append(x)
Add an item to the end of the list. Equivalent to a[len(a):] = [x]</li>
<li>list.extend(iterable)
Extend the list by appending all the items from the iterable. Equivalent to a[len(a):] = iterable.</li>
<li>list.insert(i, x)
Insert an item at a given position. The first argument is the index of the element before which to insert, so a.insert(0, x) inserts at the front of the list, and a.insert(len(a), x) is equivalent to a.append(x).</li>
<li>list.remove(x)
Remove the first item from the list whose value is equal to x. It raises a ValueError if there is no such item.</li>
<li>list.pop([i])
Remove the item at the given position in the list, and return it. If no index is specified, a.pop() removes and returns the last item in the list. (The square brackets around the i in the method signature denote that the parameter is optional, not that you should type square brackets at that position. You will see this notation frequently in the Python Library Reference.)</li>
<li>list.index(x[, start[, end]])
Return zero-based index in the list of the first item whose value is equal to x. Raises a ValueError if there is no such item.

The optional arguments start and end are interpreted as in the slice notation and are used to limit the search to a particular subsequence of the list. The returned index is computed relative to the beginning of the full sequence rather than the start argument.</li>
<li>list.count(x)
Return the number of times x appears in the list</li>
<li>list.sort(x, key=None, reverse=False)
Sort the items of the list in place (the arguments can be used for sort customization, see sorted() for their explanation). </li>

<li> list.reverse()
Reverse the elements of the list in place.</li>

<li>list.copy()
Return a shallow copy of the list. Equivalent to a[:]</li>
</ul>
<hr>
<img src="https://camo.githubusercontent.com/d6a02889c16a8707a9af252a3e29bfdf71962b2a3a34510313c671494835c103/68747470733a2f2f66696c65732e7265616c707974686f6e2e636f6d2f6d656469612f507974686f6e2d547269636b732d436861707465722d6f6e2d446174612d537472756374757265735f57617465726d61726b65642e6235643964383633333363332e6a7067" height="200px" width="200px">
