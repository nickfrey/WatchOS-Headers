//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICActionButton.h>

@interface PUICActionTextButton : PUICActionButton
{
    BOOL _setFilterOnTitleLabel;
}

@property(nonatomic) BOOL useSmallFont;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)_updateBackgroundImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

