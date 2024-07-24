#include "LinkedList.cpp"
int main()
{
	int choice;
	do
	{
		cout<<"\n";
		cout<<" _______________________________\n";
		cout<<"|             MENU              |\n";
		cout<<"|_______________________________|\n";
		cout<<"|    Database are...            |\n";
		cout<<"|    1.Book Management          |\n";
		cout<<"|    2.Player Management        |\n";
		cout<<"|    0.Save And Exit            |\n";
		cout<<"|_______________________________|\n";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				int sChoice;
				LinkedList<Book> book;
				do
				{
					cout<<"\n";
					cout<<" _____________________________________________\n";
					cout<<"|                     MENU                   |\n";
					cout<<"|____________________________________________|\n";
					cout<<"|    Operation                            	  |\n";
					cout<<"|    1.Add Book                              |\n";
					cout<<"|    2.Display All Book                      |\n";
					cout<<"|    3.Search the Book                       |\n";
					cout<<"|    4.Delete Book                           |\n";
					cout<<"|    5.Update Book Data                      |\n";
					cout<<"|    6.Author Book Data                      |\n";
					cout<<"|    0.Exit                   				  |\n";
					cout<<"|____________________________________________|\n";
					cout<<"\nEnter your choice:";
					cin>>sChoice;
					switch(sChoice)
					{
						case 1:
						{
							int ch;
							cout<<"\n";
							cout<<"\t ____________________________________________\n";
							cout<<"\t|                 MENU                      |\n";
							cout<<"\t|___________________________________________|\n";
							cout<<"\t|    Operation                              |\n";
							cout<<"\t|    1.Insert Book Details At Begining      |\n";
							cout<<"\t|    2.Insert Book Details At End           |\n";
							cout<<"\t|    2.Insert Book Details At Any Position  |\n";
							cout<<"\t|    0.Save And Exit                        |\n";
							cout<<"\t|___________________________________________|\n";
							cout<<"\t     Enter your choice:";
							cin>>ch;
							switch(ch)
							{
								case 1:
								{
									int id,rating;
									char bookname[20];
									char authorname[20];
									double price;
										
									cout<<"\n\tEnter the Book Id:  ";
									cin>>id;
			
									cout<<"\n\tEnter the Book Name: ";
									fflush(stdin);
									gets(bookname);
												
									cout<<"\n\tEnter the Author Name: ";
									fflush(stdin);
									gets(authorname);
											
									cout<<"\n\tEnter the Book Price: ";
									cin>>price;
												
									cout<<"\n\tEnter the Book Rating(1 to 10) :";
									cin>>rating;
										
											
									Book b(id,bookname,authorname,price,rating);
											
									if(book.insertRecordBegining(b))
									{
										cout<<"\n\n\t ADDED SUCCESSFULY.\n";
									}
									else
									{
										cout<<"\n\tData NOT Inserted";
									}
								}
								break;
								case 2:
								{
									int id,rating;
									char bookname[20];
									char authorname[20];
									double price;
										
									cout<<"\n\tEnter the Book Id:  ";
									cin>>id;
											
									cout<<"\n\tEnter the Book Name: ";
									fflush(stdin);
									gets(bookname);
												
									cout<<"\n\tEnter the Author Name: ";
									fflush(stdin);
									gets(authorname);
											
									cout<<"\n\tEnter the Book Price: ";
									cin>>price;
											
									cout<<"\n\tEnter the Book Rating(1 to 10) :";
									cin>>rating;
											
											
									Book b(id,bookname,authorname,price,rating);
												
									if(book.insertRecordEnd(b))
									{
										cout<<"\n\n\t ADDED SUCCESSFULY.\n";
									}
									else
									{
										cout<<"\n\tData NOT Inserted";
									}
								}
								break;
								case 3:
								{
									int id,rating;
									char bookname[20];
									char authorname[20];
									double price;
											
									cout<<"\n\tEnter the Book Id:  ";
									cin>>id;
											
									cout<<"\n\tEnter the Book Name: ";
									fflush(stdin);
									gets(bookname);
											
									cout<<"\n\tEnter the Author Name: ";
									fflush(stdin);
									gets(authorname);
											
									cout<<"\n\tEnter the Book Price: ";
									cin>>price;
											
									cout<<"\n\tEnter the Book Rating(1 to 10) :";
									cin>>rating;
											
									int pos;
									cout<<"\n";
									cout<<"\nEnter the Position: ";
									cin>>pos;
									Book b(id,bookname,authorname,price,rating);
												
									if(book.insertRecordPos(b,pos))
									{
										cout<<"\n\n\t ADDED SUCCESSFULY.\n";
									}
									else
									{
										cout<<"\n\tData NOT Inserted";
									}
								}
								break;
										default:
											{
												cout<<"\nInvalid Choice!";
											}break;
									}
								}break;
							case 2:
								{
									book.display();
								}break;
							case 3:
								{
									int ch;
									cout<<"\n";
									cout<<"\t _________________________________________\n";
									cout<<"\t|                  MENU                   |\n";
									cout<<"\t|_________________________________________|\n";
									cout<<"\t|    Operation                            |\n";
									cout<<"\t|    1.Search By Book ID                  |\n";
									cout<<"\t|    2.Search By Book Name                |\n";
									cout<<"\t|    0.Save And Exit                      |\n";
									cout<<"\t|_________________________________________|\n";
									cout<<"\t     Enter your choice:";
									cin>>ch;
									switch(ch)
									{
										case 1:
											{
												int id;
												cout<<"\nEnter The Book Id For Search:";
												cin>>id;
												Node<Book> *i = book.searchRecord(id);
												if(i!= NULL)
												{
													i->getData().display();
												}
												else
												{
													cout<<"\nBook Set Are Empty or Book Record Not Found";
												}
											}
											break;
										case 2:
											{
												char name[20];
												cout<<"Enter the Book Name: ";
												fflush(stdin);
												gets(name);
												Node<Book>*i=book.searchRecord(name);
												if(i!=NULL)
												{
													i->getData().display();
												}
												else
												{
													cout<<"\nBook Set Are Empty or Book Record Not Found";
												}
											}
											break;
										default:
										{
											cout<<"\nInvalid Choice !";
										}		
										break;	
									}
								}
								break;
							case 4:
								{
									int ch;
									cout<<"\n";
									cout<<"\t _____________________________________\n";
									cout<<"\t|                 MENU                |\n";
									cout<<"\t|_____________________________________|\n";
									cout<<"\t|    Operation                        |\n";
									cout<<"\t|    1.Delete First Book              |\n";
									cout<<"\t|    2.Delete Last Book               |\n";
									cout<<"\t|    3.Delete Book By Searching       |\n";
									cout<<"\t|_____________________________________|\n";
									cout<<"\t     Enter your choice:";
									cin>>ch;
									switch(ch)
									{
										case 1:
											{
												Book b;
												if(book.deleteRecordBegining(b))
												{
													b.display();
													cout<<"\nBook Was Deleted Successfully";
												}
												else
												{
													cout<<"\nDelete Operation Failed";
												}
											}break;
										case 2:
											{
												Book b;
												if(book.deleteRecordLast(b))
												{
													b.display();
													cout<<"\nBook Was Deleted Successfully";
												}
												else
												{
													cout<<"\nDelete Operation Failed";
												}
											}break;
										case 3:
											{
												int schoice;
												cout<<"\n";
												cout<<"\t ________________________________________\n";
												cout<<"\t|                  MENU                  |\n";
												cout<<"\t|________________________________________|\n";
												cout<<"\t|    Operation                           |\n";
												cout<<"\t|    1.Search By Book ID                 |\n";
												cout<<"\t|    2.Search By Book Name               |\n";
												cout<<"\t|________________________________________|\n";
												cout<<"\t     Enter your choice:";
												cin>>schoice;
												switch(schoice)
												{
													case 1:
														{
															int id;
															cout<<"\nEnter The Book Id To Deleted:";
															cin>>id;
															Book b;
															if(book.deleteRecordPos(b,id))
															{
																b.display();
																cout<<"\nBook Was Deleted Successfully";
															}
															else
															{
																cout<<"\nBook Set Are Empty or Book Record Not Found ";
															}
														}break;
													case 2:
														{
															char name[20];
															cout<<"\nEnter The Book Name to Delete:";
															fflush(stdin);
															gets(name);
															Book b;
															if(book.deleteRecordPos(b,name))
															{
																b.display();
																cout<<"\nBook Was Deleted Successfully";
															}
															else
															{
																cout<<"\nBook Set Are Empty or Book Record Not Found";
															}
														}break;
													default:
														{
															cout<<"\nInvalid Choice";
															break;
														}
												}												
											}break;
											
									}
								}break;		
							case 5:
								{
									int ch;
									cout<<"\n";
									cout<<"\t ________________________________________\n";
									cout<<"\t|                  MENU                  |\n";
									cout<<"\t|________________________________________|\n";
									cout<<"\t|    Operation                           |\n";
									cout<<"\t|    1.Search By Book ID                 |\n";
									cout<<"\t|    2.Search By Book Name               |\n";
									cout<<"\t|________________________________________|\n";
									cout<<"\t     Enter your choice:";
									cin>>ch;
									switch(ch)
									{
										case 1:
											{
												int id;
												cout<<"\nEnter The Book Id To Updated:";
												cin>>id;
												Node<Book> *i= book.searchRecord(id);
												if(i!=NULL)
												{
													i->getData().display();
													if(book.updateRecord(i))
													{
														cout<<"\nBook Record Updated Successfully";
													}
													else
													{
														cout<<"\nSomething Wents Wrong";
													}
												}
												else
												{
													cout<<"\nBook Set is Empty or Book Record Not Found";
												}
											}break;
										case 2:
											{
												char name[20];
												cout<<"\nEnter the Book Name To Search: ";
												fflush(stdin);
												gets(name);
												Node<Book> *i = book.searchRecord(name);
												if(i!=NULL)
												{
													i->getData().display();
													if(book.updateRecord(i))
													{
														cout<<"\nBook Record Updated Successfully";
													}
													else
													{
														cout<<"\nSomething Wents Wrong";
													}
												}
												else
												{
													cout<<"\nBook Set is Empty or Book Record Not Found";
												}
											}
											break;
										default:
											{
												cout<<"\nInvalid Choice";
												break;
											}
									}	
								}
								break;	
							case 6:
							{
								char k[20];
								cout<<"\nEnter the name of Author:";
								cin>>k;
								book.searchAuthor(k);
		
							}
							break;	
							default:
							{
								cout<<"\nInvalid Choice";
							break;
							}	
						}
					}while(sChoice!=0);
				}break;
                ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////				
				
			case 2:
				{
					int sChoice;
					LinkedList<Players> player;
					do
					{
						cout<<"\n";
						cout<<"\t ____________________________________________\n";
						cout<<"\t|                  MENU                     |\n";
						cout<<"\t|___________________________________________|\n";
						cout<<"\t|    Operation                              |\n";
						cout<<"\t|    1.Add Player Detail                    |\n";
						cout<<"\t|    2.Display All Player Details           |\n";
						cout<<"\t|    3.Search the Player                    |\n";
						cout<<"\t|    4.Delete Player Record                 |\n";
						cout<<"\t|    5.Update Player Record                 |\n";
						cout<<"\t|    0.Exit                                 |\n";
						cout<<"\t|___________________________________________|\n";
						cout<<"\t     Enter your choice:";
						cin>>sChoice;
						switch(sChoice)
						{
							case 1:
								{
									int ch;
									cout<<"\n";
									cout<<"\t ____________________________________\n";
									cout<<"\t|              MENU                 |\n";
									cout<<"\t|___________________________________|\n";
									cout<<"\t|    Operation                      |\n";
									cout<<"\t|    1.Insert At Begining           |\n";
									cout<<"\t|    2.Insert At End                |\n";
									cout<<"\t|    3.Insert At Any Position       |\n";
									cout<<"\t|    0.Save And Exit                |\n";
									cout<<"\t|___________________________________|\n";
									cout<<"\t     Enter your choice:";
									cin>>ch;
									switch(ch)
									{
										case 1:
											{
												int no;
						                        char name[20];
						                        int matches, wickets, runs;
						
						                        cout << "Enter Jersey No of Player: ";
						                        cin >> no;
						
						                        cout << "Enter Player Name:";
						                        fflush(stdin);
						                        gets(name);
						
						                        cout << "Enter Player Played Matches: ";
						                        cin >> matches;
						
						                        cout << "Enter Player Runs: ";
						                        cin >> runs;
						
						                        cout << "Enter Player Wickets: ";
						                        cin >> wickets;
						
						                        Players p(no, name, matches, runs, wickets);
						
						                        if (player.insertRecordBegining(p))
						                        {
						                        	cout << "\nData Inserted Succesfully";
												} 
						                        else
						                        {
						                        	cout << "\nData NOT Inserted";
												}
						                            
											}break;
										case 2:
											{
												int no;
						                        char name[20];
						                        int matches, wickets, runs;
						
						                        cout << "Enter Jersey No of Player: ";
						                        cin >> no;
						
						                        cout << "Enter Player Name: ";
						                        fflush(stdin);
						                        gets(name);
						
						                        cout << "Enter Player Played Matches: ";
						                        cin >> matches;
						
						                        cout << "Enter Player Runs: ";
						                        cin >> runs;
						
						                        cout << "Enter Player Wickets: ";
						                        cin >> wickets;
						
						                        Players p(no, name, matches, runs, wickets);
						
						                        if (player.insertRecordEnd(p))
						                        {
						                        	cout << "\nData Inserted Succesfully";
												}
						                            
						                        else
					                            {
					                            	cout << "\nData NOT Inserted";
												}
											}break;
										case 3:
											{		
												 int no, pos;
						                        char name[20];
						                        int matches, wickets, runs;
						
						                        cout << "Enter Jersey No of Player: ";
						                        cin >> no;
						
						                        cout << "Enter Player Name: ";
						                        fflush(stdin);
						                        gets(name);
						
						                        cout << "Enter Player Played Matches: ";
						                        cin >> matches;
						
						                        cout << "Enter Player Runs: ";
						                        cin >> runs;
						
						                        cout << "Enter Player Wickets: ";
						                        cin >> wickets;
						
						                        cout << "\nEnter Position to Insert Record: ";
						                        cin >> pos;
						
						                        Players p(no, name, matches, runs, wickets);
						
						                        if (player.insertRecordPos(p, pos))
						                        {
						                        	cout << "\nData Inserted Succesfully!";
												}
						                        else
						                        {
						                        	cout << "\nData NOT Inserted";
												}
						                            
											}break;	
										default:
											cout<<"\nInvalid Choice";
											break;
									}
								}break;
							case 2:
								{	title();
									player.display();
								}break;
							case 3:
								{
									int ch;
									cout<<"\n";
									cout<<"\t _________________________________________\n";
									cout<<"\t|                  MENU                   |\n";
									cout<<"\t|_________________________________________|\n";
									cout<<"\t|    Operation                            |\n";
									cout<<"\t|    1.Search Player By Jeresy Number     |\n";
									cout<<"\t|    2.Search Player By Name              |\n";
									cout<<"\t|    0.Save And Exit                      |\n";
									cout<<"\t|_________________________________________|\n";
									cout<<"\t     Enter your choice:";
									cin>>ch;
									switch(ch)
									{
										case 1:
											{
												int num;
												cout << "\nEnter Jeresy Number: ";
						                        cin >>num;
						                        Node<Players> *i = player.searchRecord(num);
						                        if (i != NULL)
						                        {
						                            title();
						                            i->getData().display();
						                        }
						                        else
						                        {
						                        	cout<<"\nBook Set Are Empty or Book Record Not Found";
												}
											}break;
										case 2:
											{
												char name[20];
						                        cout << "\nEnter Player Name: ";
						                        fflush(stdin);
						                        gets(name);
						                        Node<Players> *i = player.searchRecord(name);
						                        if (i != NULL)
						                        {
						                			title();
						                            i->getData().display();
						                        }
						                        else
												{
						                        	cout<<"\nBook Set Are Empty or Book Record Not Found";
												}
											}break;
									}
								}break;
							case 4:
								{
									int ch;
									cout<<"\n";
									cout<<"\t _________________________________________\n";
									cout<<"\t|                   MENU                 |\n";
									cout<<"\t|________________________________________|\n";
									cout<<"\t|    Operation                           |\n";
									cout<<"\t|    1.Delete First Book                 |\n";
									cout<<"\t|    2.Delete Last Book                  |\n";
									cout<<"\t|    3.Delete Book By Searching          |\n";
									cout<<"\t|________________________________________|\n";
									cout<<"\t     Enter your choice:";
									cin>>ch;
									switch(ch)
									{
										case 1:
											{
												Players p;
						                        if (player.deleteRecordBegining(p))
						                        {
						                            title();
						                            p.display();
						                            cout << "\nPlayer Was Deleted Successfully!";
						                        }
						                        else
						                        {
						                        	cout<<"\nDelete Operation Failed";
												}
											}break;
										case 2:
											{
												Players p;
						                        if (player.deleteRecordLast(p))
						                        {
						                            title();
						                            p.display();
						                            cout << "\nPlayer Was Deleted Successfully!";
						                        }
						                        else
						                        {
						                        	cout<<"\nDelete Operation Failed";
												}
											}break;
										case 3:
											{
												int schoice;
												cout<<"\n";
												cout<<"\t _________________________________________\n";
												cout<<"\t|                  MENU                   |\n";
												cout<<"\t|_________________________________________|\n";
												cout<<"\t|    Operation                            |\n";
												cout<<"\t|    1.Search By Book ID                  |\n";
												cout<<"\t|    2.Search By Book Name                |\n";
												cout<<"\t|_________________________________________|\n";
												cout<<"\t     Enter your choice:";
												cin>>schoice;
												switch(schoice)
												{
													case 1:
														{
															int no;
								                            cout << "\nEnter Player Jeresy Number: ";
								                            cin >> no;
								                            Players p;
								                            if (player.deleteRecordPos(p, no))
								                            {
								                                title();
								                                p.display();
								                                cout << "\nPlayer Record Was Deleted Successfully!\n";
								                            }
								                            else
								                            {
								                            	cout << "\nPlayer Set Are Empty or Player Record Not Found";
															}
														}break;
													case 2:
														{
															char name[20];
								                            cout << "\nEnter Player Name: ";
								                            fflush(stdin);
								                            gets(name);
								                            Players p;
								                            if (player.deleteRecordPos(p, name))
								                            {
								                                title();
								                                p.display();
								                                cout << "\nPlayer Record Was Deleted Successfully!\n";
								                            }
								                            else
								                            {
								                            	 cout << "\nPlayer Set Are Empty or Player Record Not Found";
															}
														}break;
													default:
								                        cout << "\n\tInvalid Choice!\n";
								                        break;
												}
								
											}break;
									}
								}break;
							case 5:
								{
									int ch;
									cout<<"\n";
									cout<<"\t _________________________________________\n";
									cout<<"\t|                 MENU                    |\n";
									cout<<"\t|_________________________________________|\n";
									cout<<"\t|    Operation                            |\n";
									cout<<"\t|    1.Search By Book ID                  |\n";
									cout<<"\t|    2.Search By Book Name                |\n";
									cout<<"\t|_________________________________________|\n";
									cout<<"\t     Enter your choice:";
									cin>>ch;
									switch(ch)
									{
										case 1:
											{
												 int no;
						                        cout << "\nEnter Player Jeresy Number: ";
						                        cin >> no;
						                        Node<Players> *i = player.searchRecord(no);
						                        if (i != NULL)
						                        {
						                            title();
						                            i->getData().display();
						                            if (player.updateRecord(i))
						                                cout << "\nPlayer Record Updated Successfully!";
						                            else
						                                cout << "\nSomething Wents Wrong!";
						                        }
						                        else
						                        {
						                        	 cout << "\nPlayer List Are Empty or Player Record Not Found";
												}
						                    }break;
						                case 2:
						                	{
						                		char name[20];
						                        cout << "\nEnter Player Name: ";
						                        fflush(stdin);
						                        gets(name);
						                        Node<Players> *i = player.searchRecord(name);
						                        if (i != NULL)
						                        {
						                            title();
						                            i->getData().display();
						                            if (player.updateRecord(i))
						                                cout << "\nPlayer Record Updated Successfully!";
						                            else
						                                cout << "\nSomething Wents Wrong!";
						                        }
						                        else
						                            cout << "\nPlayer Set Are Empty or Player Record Not Found";
											}break;
									}
								}break;
							case 0:
								{
									break;
								}
							default:
								
                    			cout << "\nInvalid Choice!";
                   					 break;
									
						}	
						
					}while(sChoice!=0);
				}break;
			
				
		}
	
	}while(choice!=0);

	return 0;
}
