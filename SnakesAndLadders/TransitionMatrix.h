int size = 101;  //TODO
Eigen::MatrixXf TransitionMatrix(size, size);
Eigen::MatrixXf GameMatrix(size, size);
Eigen::VectorXf v(size);

unsigned int ROLLS = 2; //TODO

double prob = 1.0/6.0;  //TODO




void SetTransitionMatrix()
{
	TransitionMatrix.setZero();
	
	//TODO

	
	//TransitionMatrix(0.0,1.0) = 6.0;

	for (int i = 0; i < TransitionMatrix.rows() - 6; i++)
	{
		
		TransitionMatrix(i, i) = 0;
		TransitionMatrix(i, i + 1) = prob;
		TransitionMatrix(i, i + 2) = prob;
		TransitionMatrix(i, i + 3) = prob;
		TransitionMatrix(i, i + 4) = prob;
		TransitionMatrix(i, i + 5) = prob;
		TransitionMatrix(i, i + 6) = prob;
	
		if (TransitionMatrix(i, 3) > 0)
		{
			TransitionMatrix(i, 3) = TransitionMatrix(i, 19);
			TransitionMatrix(i, 3) = 0;
		}
		if (TransitionMatrix(i, 15) > 0)
		{
			TransitionMatrix(i, 15) = TransitionMatrix(i, 37);
			TransitionMatrix(i, 15) = 0;
		}
		if (TransitionMatrix(i, 22) > 0)
		{
			TransitionMatrix(i, 22) = TransitionMatrix(i, 42);
			TransitionMatrix(i, 22) = 0;
		}
		if (TransitionMatrix(i, 25) > 0)
		{
			TransitionMatrix(i, 25) = TransitionMatrix(i, 64);
			TransitionMatrix(i, 25) = 0;
		}
		if (TransitionMatrix(i, 41) > 0)
		{
			TransitionMatrix(i, 41) = TransitionMatrix(i, 73);
			TransitionMatrix(i, 41) = 0;
		}
		if (TransitionMatrix(i, 53) > 0)
		{
			TransitionMatrix(i, 53) = TransitionMatrix(i, 74);
			TransitionMatrix(i, 53) = 0;
		}
		if (TransitionMatrix(i, 63) > 0)
		{
			TransitionMatrix(i, 63) = TransitionMatrix(i, 86);
			TransitionMatrix(i, 63) = 0;
		}
		if (TransitionMatrix(i, 76) > 0)
		{
			TransitionMatrix(i, 76) = TransitionMatrix(i, 91);
			TransitionMatrix(i, 76) = 0;
		}
		if (TransitionMatrix(i, 84) > 0)
		{
			TransitionMatrix(i, 84) = TransitionMatrix(i, 98);
			TransitionMatrix(i, 84) = 0;
		}
		if (TransitionMatrix(i, 11) > 0)
		{
			TransitionMatrix(i, 11) = TransitionMatrix(i, 7);
			TransitionMatrix(i, 11) = 0;
		}
		if (TransitionMatrix(i, 18) > 0)
		{
			TransitionMatrix(i, 18) = TransitionMatrix(i, 13);
			TransitionMatrix(i, 18) = 0;
		}
		if (TransitionMatrix(i, 28) > 0)
		{
			TransitionMatrix(i, 28) = TransitionMatrix(i, 12);
			TransitionMatrix(i, 28) = 0;
		}
		if (TransitionMatrix(i, 36) > 0)
		{
			TransitionMatrix(i, 36) = TransitionMatrix(i, 34);
			TransitionMatrix(i, 36) = 0;
		}
		if (TransitionMatrix(i, 77) > 0)
		{
			TransitionMatrix(i, 77) = TransitionMatrix(i, 16);
			TransitionMatrix(i, 77) = 0;
		}
		if (TransitionMatrix(i, 47) > 0)
		{
			TransitionMatrix(i, 47) = TransitionMatrix(i, 26);
			TransitionMatrix(i, 26) = 0;
		}
		if (TransitionMatrix(i, 83) > 0)
		{
			TransitionMatrix(i, 83) = TransitionMatrix(i, 39);
			TransitionMatrix(i, 83) = 0;
		}
		if (TransitionMatrix(i, 92) > 0)
		{
			TransitionMatrix(i, 92) = TransitionMatrix(i, 75);
			TransitionMatrix(i, 92) = 0;
		}
		if (TransitionMatrix(i, 99) > 0)
		{
			TransitionMatrix(i, 99) = TransitionMatrix(i, 70);
			TransitionMatrix(i, 99) = 0;
		}
	}

	TransitionMatrix(95, 95) = prob;
	TransitionMatrix(95, 96) = prob;
	TransitionMatrix(95, 97) = prob;
	TransitionMatrix(95, 98) = prob;
	TransitionMatrix(95, 99) = prob;
	TransitionMatrix(95, 100) = prob + prob;
	TransitionMatrix(96, 96) = prob;
	TransitionMatrix(96, 97) = prob;
	TransitionMatrix(96, 98) = prob;
	TransitionMatrix(96, 99) = prob;
	TransitionMatrix(96, 100) = prob + prob +prob;
	TransitionMatrix(97, 97) = prob;
	TransitionMatrix(97, 98) = prob;
	TransitionMatrix(97, 99) = prob;
	TransitionMatrix(97, 100) = prob + prob + prob + prob;
	TransitionMatrix(98, 98) = prob;
	TransitionMatrix(98, 99) = prob;
	TransitionMatrix(98, 100) = prob + prob + prob + prob + prob;
	TransitionMatrix(99, 99) = prob;
	TransitionMatrix(99, 100) = 1;
	TransitionMatrix(100, 100) = 1;
 

}

void setGameMatrix()
{
	GameMatrix.setZero();
	GameMatrix = TransitionMatrix;

	for (int i = 0; i < size-1; i++)
	{
		

	}
}
 
