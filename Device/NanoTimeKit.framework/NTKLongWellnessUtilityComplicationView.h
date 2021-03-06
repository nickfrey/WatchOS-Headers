//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityLabelComplicationView.h>

#import "NTKWellnessComplicationDisplay.h"

@class NSMutableAttributedString, NSString;

@interface NTKLongWellnessUtilityComplicationView : NTKUtilityLabelComplicationView <NTKWellnessComplicationDisplay>
{
    NSMutableAttributedString *_caloriesBurnedString;
    NSMutableAttributedString *_activeMinutesString;
    NSString *_sedentaryHoursString;
    BOOL _needsDynamicLabelFitment;
}

- (id)_labelMetricsTextWithSeparator:(id)arg1 typographicTracking:(float)arg2;
- (id)_labelMetricsTextWithSeparator:(id)arg1;
- (id)_thirdFallbackLabelMetricsText;
- (id)_secondFallbackLabelMetricsText;
- (id)_firstFallbackLabelMetricsText;
- (BOOL)_labelFitsInWidth:(float)arg1 byApplyingAttributedText:(id)arg2;
- (id)_idealLabelMetricsText;
- (void)_prepDynamicLabelFitment;
- (id)_unitSubstringForClockStringKey:(id)arg1;
- (void)_doDynamicLabelFitment;
- (void)setWellnessComplicationActiveHoursCurrent:(float)arg1 goal:(float)arg2;
- (void)setWellnessComplicationBriskMinutesCurrent:(float)arg1 goal:(float)arg2;
- (void)setWellnessComplicationCaloriesBurnedCurrent:(float)arg1 goal:(float)arg2;
- (void)setWellnessComplicationPromptSetup;
- (void)setWellnessComplicationLoading;
- (void)setWellnessComplicationLocked;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

