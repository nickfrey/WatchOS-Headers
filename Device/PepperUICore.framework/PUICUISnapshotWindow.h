//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIView;

@interface PUICUISnapshotWindow : UIWindow
{
    UIView *_snapshot;
    int _visibilityCount;
}

- (void)popVisible;
- (void)pushVisible;
- (void).cxx_destruct;
- (void)setSnapshot:(id)arg1;
- (BOOL)_canAffectStatusBarAppearance;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

