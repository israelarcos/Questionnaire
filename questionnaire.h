void questions()
{
    vector<string> stringList;
    vector<string> stringInput;
    string List, Input;
    ifstream myfile("Questions_for_questionnaire.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, List))
        {
            stringList.push_back(List);
        }
        myfile.close();
    }
    for (int i = 0; i < stringList.size(); i++)
    {
        cout << "Question " << ++i << " ";
        cout << stringList[--i] << "?" << endl;
        getline(cin, Input);
        stringInput.push_back(Input);
    }
    cout << endl;
    for (int i = 0; i < stringInput.size(); i++)
    {
        cout << "Response for question " << ++i << " ";
        cout << stringInput[--i] << endl;
    }
}