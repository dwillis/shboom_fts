<form name='profile' method='post' action='' onSubmit=checkProfile()>
<blockquote>
To search in other data areas or within the same area, select the topic from the pull-down menu. You 
have two search options for each topic: 1.) Enter a search term in the box and click "Submit," or 2.) Double click on any 
word in the body of the page. That will create a hyperlink, which, when clicked again, will launch a search within the selected topic for that word.
</blockquote>

<table align="center">
<tr>
<td class=fieldsHeading>Select a topic to search:</td>
<td class=fieldsHeading>Enter a Search Term:</td>
<td></td>
</tr>


<tr>
<td>
<select name='makelink'>
<option value='/cas/fts_filterresults.asp'>Casualties since 1950
<option value='/contractsnys/findit.asp'>New York State Contracts
<option value='/empire/findit.asp'>Empire State Development Press Releases
<option value='/esdc/findit.asp'>Empire State Development Database
</select>
</td>
<td><input type="text" name="frmSearchWord" size="35"></td>
<td><input type="submit" value="Submit"></td>
</tr>
</table>
</form>

