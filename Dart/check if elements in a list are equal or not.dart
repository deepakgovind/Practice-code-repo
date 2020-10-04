bool areListsEqual(var list1, var list2) 
{
    
    //Check if both are lists and both have same length
    if(!(list1 is List && list2 is List) || list1.length != list2.length) {
        return false;
        }
    
    
    //Check if the elements are equal
    for(int i = 0; i < list1.length; i++) 
    {
        if(list1[i] != list2[i]) 
        {
            return false;
        }
    }
    
    return true;
}

//main function
void main(){
    List list1 = [44, 'Hello', 66, 'Welcome'];
    List list2 = [44, 'Hello', 66, 'Welcome'];
    List list3 = [4, 'Hello', 6];
    
    if(areListsEqual(list1, list2)) {
        print('list1 and list2 are equal in value.');
    } else {
        print('list1 and list2 are not equal in value.');
    }
    
    if(areListsEqual(list1, list3)) {
        print('list1 and list3 are equal in value.');
    } else {
        print('list1 and list3 are not equal in value.');
    }
}