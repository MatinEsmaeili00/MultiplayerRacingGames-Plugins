// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_UW_ProgressWidget.h"




void UCPP_UW_ProgressWidget::SetProgressText(float NewPlacement)
{
	if (ProgressText)
	{
		FString PlacementString = FString::Printf(TEXT("%.2f"), NewPlacement);
		ProgressText->SetText(FText::FromString(PlacementString));
	}
}
