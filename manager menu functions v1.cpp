//Dan laukzemis Functions 
#include manager_menu.h

void viewrepairs()
{
	//return unfinished items
	return equipment.Repairstatus;
}
	

void issueinvoice()
{
	//issue invoice
	//get equipment item
	cout<< "Invoice: "
		<<"ID number: "+ equipment.ID+"\n";
		<<"Date Entered: "+ equipment.DateEntered"\n";
		<<"Total Cost: $" + equipment.TotalPartCost"\n";
		<<"Parts Used: " + Equipment.PartsUsed+ "\n";
		<<"Repair Status: " + Equipment.RepairStatuse+"\n";
		<<"Manager Approval:"+ Equipment.ManagerApprovalDate+ "\n";
}


void signoff(string sign)
{
	//call completed equipment
	cout<<"Enter manager signature for approval: ";
	cin>> sign;
	Equipment.setManagerApproval = sign;
}
