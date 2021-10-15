#ifndef CLASSINVERTEDINDEX_H
#define CLASSINVERTEDINDEX_H

struct node_child
{
    int value;
    int height;
    node_child *left;
    node_child *right;
};
typedef struct node_child *ptr_child;


struct node
{
	int value;
	node *left;
	node *right;
	int height;
	node_child *ndc;
};
typedef struct node *ptr;





class ClassInvertedIndex
{
    public:
        ClassInvertedIndex();
        ~ClassInvertedIndex();
        //
        //NODE_PARENT:
        //
        void insert(int,int,ptr &);
        int m_height(ptr);
        //rotations
        ptr srl(ptr &);
		ptr drl(ptr &);
		ptr srr(ptr &);
		ptr drr(ptr &);
		//space
		void makeempty(ptr &);
		void copy(ptr &,ptr &);
		ptr nodecopy(ptr &);

        //order
        void inorder(ptr);

        //deletion & sorting
        void del(int, ptr &);
		int deletemin(ptr &);
        int max(int,int);

        //
        //NODE_CHILD:
        //

        void insert_child(int,ptr &);
        int c_height(ptr_child);
        //rotations
        ptr_child srl(ptr_child &);
		ptr_child drl(ptr_child &);
		ptr_child srr(ptr_child &);
		ptr_child drr(ptr_child &);
		//space
		void makeempty(ptr_child &);
		void copy(ptr_child &,ptr_child &);
		ptr_child nodecopy(ptr_child &);

        //order
        void inorder(ptr_child);

        //deletion & sorting
        void del(int, ptr_child &);
		int deletemin(ptr_child &);
        //int max(int,int);



    protected:

    private:
};

#endif // CLASSINVERTEDINDEX_H
