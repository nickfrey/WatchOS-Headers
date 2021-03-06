//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKLabelNode.h"

#import "NTKMonogramComplicationDisplay.h"

@class NSString;

@interface _MonogramNode : SKLabelNode <NTKMonogramComplicationDisplay>
{
    unsigned int complicationType;
    id <NTKComplicationDisplayObserver> displayObserver;
}

- (BOOL)shouldCancelTouchesInScrollview;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property(nonatomic) unsigned int complicationType; // @synthesize complicationType;
- (void)setMonogramText:(id)arg1;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

