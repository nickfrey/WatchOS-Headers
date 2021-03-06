//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAFilter, UIColor, UIFont;

@interface CUISBulletinTextAttributes : NSObject
{
    UIColor *_textColor;
    UIFont *_font;
    CAFilter *_compositingFilter;
}

- (id)initWithTextColor:(id)arg1 font:(id)arg2 compositingFilter:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAFilter *compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;

@end

