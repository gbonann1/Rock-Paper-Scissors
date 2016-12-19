rps player_400(int round,rps *myhist,rps *opphist) {
	rps retVal = Paper;
	if (round > 2){
		if (opphist[round-1] == opphist[round-2] && opphist[round-2] == opphist[round-3]){
			if (opphist[round-1] == Paper)
				retVal = Scissors;
			else if (opphist[round-1] == Scissors)
				retVal == Rock;
			else if (opphist[round-1] == Rock)
				retVal == Paper;
			
		}		   
		else if (opphist[round-1] == Rock){
			retVal = Rock;
		}
		else if(opphist[round-1] == Scissors)
		{
			retVal = Scissors;
		}
		else if(opphist[round-1] == Paper){
			retVal = Paper;
		}
	}
	return retVal;
}

register_player(player_400,"400_Copycat");
