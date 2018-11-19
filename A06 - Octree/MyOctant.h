/*----------------------------------------------
Programmer: Alberto Bobadilla (labigm@gmail.com)
Date: 2017/06
----------------------------------------------*/
#ifndef __MYOCTANT_H_
#define __MYOCTANT_H_

#include "Simplex\Simplex.h"
#include "MyEntityManager.h"

namespace Simplex
{

	//System Class
	class MyOctant
	{
		int m_nData = 0; //Number of elements in the list of elements
		std::vector<int> m_lData; //list of elements
		MeshManager* m_pMeshMngr = nullptr; //Pointer to Mesh manager
		MyEntityManager* m_pEntityMngr = nullptr;
		MyRigidBody* m_pRigidBody = nullptr;
		uint m_iID = 0;
		static uint m_nCount;
		MyOctant* m_pParent = nullptr;
		MyOctant* m_pChild[8];
		uint m_nLevel = 0;

		bool visiblePlanes = true; // planes representing spatial optimization are visible
		int numDimensions = 0; // variable holding the current number of dimensions

	public:
		void Display(void);
		void IsColliding(void);
		void Subdivide();
		void ChangeDimension(int current, bool positive); // increment or decrement numDimensions
		int GetDimension(void); // get value of numDimensions
		void ClearChildren(void); // delete children outside of Release
		void ToggleVisible(bool toggle); // change value of visiblePlanes

		MyOctant(vector3 a_v3Center, float a_fSize);
		/*
		Usage: Constructor
		Arguments: ---
		Output: class object instance
		*/
		MyOctant(void);
		/*
		Usage: Copy Constructor
		Arguments: class object to copy
		Output: class object instance
		*/
		MyOctant(MyOctant const& other);
		/*
		Usage: Copy Assignment Operator
		Arguments: class object to copy
		Output: ---
		*/
		MyOctant& operator=(MyOctant const& other);
		/*
		Usage: Destructor
		Arguments: ---
		Output: ---
		*/
		~MyOctant(void);

		/*
		Usage: Changes object contents for other object's
		Arguments: other -> object to swap content from
		Output: ---
		*/
		void Swap(MyOctant& other);

		/*
		Usage: Gets data member
		Arguments: ---
		Output: data
		*/
		int GetData(void);
		/*
		Usage: Sets data member
		Arguments: int a_nData = 1 -> data to set
		Output: ---
		*/
		void SetData(int a_nData = 1);
		/* Property */
		//__declspec(property(get = GetData, put = SetData)) int Data;

		/*
		Usage: adds data on vector
		Arguments: int a_nData -> data to add
		Output: ---
		*/
		void SetDataOnVector(int a_nData);
		/*
		Usage: gets data on vector at the specified entry
		Arguments: int a_nIndex -> entry index
		Output: entry's content
		*/
		int& GetDataOnVector(int a_nIndex);

	private:
		/*
		Usage: Deallocates member fields
		Arguments: ---
		Output: ---
		*/
		void Release(void);
		/*
		Usage: Allocates member fields
		Arguments: ---
		Output: ---
		*/
		void Init(void);
	};//class

} //namespace Simplex

#endif //__MYOCTANT_H_

/*
USAGE:
ARGUMENTS: ---
OUTPUT: ---
*/