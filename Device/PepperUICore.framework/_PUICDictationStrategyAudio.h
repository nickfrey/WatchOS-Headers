//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKAudioRecorderDelegate.h"
#import "_PUICDictationStrategy.h"

@class AFSiriContext, CKAudioRecorder, NSString;

@interface _PUICDictationStrategyAudio : NSObject <CKAudioRecorderDelegate, _PUICDictationStrategy>
{
    id <_PUICDictationStrategyDelegate> _delegate;
    CKAudioRecorder *_audioRecorder;
    BOOL _isListening;
    BOOL _didCancel;
    BOOL _sentDidBeginRecordingNotification;
    float _averagePower;
}

- (void)audioRecorderDidUpdateAveragePower:(float)arg1;
- (void)audioRecorderRecordingDidFail:(id)arg1;
- (void)audioRecorderRecordingDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL didCancel;
@property(readonly, nonatomic) float audioAveragePower;
- (void)finishListening:(CDUnknownBlockType)arg1;
- (void)cancelListening;
@property(readonly, nonatomic) BOOL isListening;
- (void)startListeningForViewController:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_PUICDictationStrategyDelegate> delegate;

// Remaining properties
@property(retain, nonatomic) AFSiriContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) NSString *languageCode;
@property(readonly) Class superclass;

@end

