//�ǵݹ��������
void PreOrderTraverse(BiTree b)
{
	InitStack(S);
	BiTree p=b;
	while(p ||!IsEmpty(S) )
	{
		while(p)
		{
			printf("%c",p->data);
			push(S,p);
			p=p->lchild;
		}
		if(!Empty(S))
		{
			p=pop(S);
			p=p->rchild;
		}
	}
} 



//�ǵݹ�������
void PostOrderTraverse(BiTree b)
{
	InitStack(S);
	BiTree p=b;
	BiTree r=Null;
	while( p || !IsEmpty(S) )
	{
		if(p)
		{
			push(S,p);
			p=p->lchild;
		}
		else{
		
		Gettop(S,p);
		if(p->rchild && r!=p->rchild )  p=p->rchild;
		else
		{
			pop(S,p);
			printf("%c",p->data);
			
			r=p;
			p=Null;
		}
	}
	}
} 
