//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPSManager;

@interface NTKClockStatusBarSettings : NSObject
{
    NPSManager *_npsManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_notifyClientsOfChange;
- (void)_handlePrefsChanged;
- (void)setNotificationsIndicatorEnabled:(_Bool)arg1;
- (_Bool)isNotificationsIndicatorEnabled;
- (void)dealloc;
- (id)init;

@end
