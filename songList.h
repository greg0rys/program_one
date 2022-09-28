#include "song.h"
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

class songList
{
	private:
		struct node
		{

			node()
			{
				next = nullptr;
				data = nullptr;
			}

			node(const song &aSong)
			{
				data = new song(aSong);
				next = nullptr;
			}

			~node()
			{
				if(data)
				{
					delete data;
				}
				next = nullptr;
				data = nullptr;
			}

			song * data;
			node * next;
		};
		node * head;
		int songCount;

	public:
		songList();
		songList(const songList &);
		songList &operator=(const songList &);
};
