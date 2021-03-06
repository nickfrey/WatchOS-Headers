//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICActionButton.h>

@class UIView;

@interface PUICActionImageButton : PUICActionButton
{
    BOOL _isAnimatingDown;
    BOOL _needsLongTitleLayout;
    BOOL _blendEnabled;
    UIView *_blendView;
}

- (void)disableBlend;
- (id)_createBackgroundImageWithColor:(id)arg1;
- (id)_activeBackgroundImage;
- (id)_destructiveBackgroundImage;
@property(nonatomic) BOOL needsLongTitleLayout; // @synthesize needsLongTitleLayout=_needsLongTitleLayout;
- (void)_animateTouchUp;
- (id)_blendImage;
- (void)_animateTouchDown;
- (void)setBlendEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isImageButton;
- (void).cxx_destruct;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (id)_backgroundImage;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_updateBackgroundImage;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

