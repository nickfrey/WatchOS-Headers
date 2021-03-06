//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AVPlayer, AVPlayerItem, NSMutableArray, NSObject<PUICVideoClipViewControllerDelegate>, NSURL, PUICVideoClip, UIView;

@interface PUICVideoClipViewController : UIViewController
{
    BOOL _seeking;
    BOOL _isObservingDurationKey;
    BOOL _isObservingRateKey;
    BOOL _sentPlayerDidLoadNotification;
    NSURL *_videoURL;
    int _framesPerSecond;
    int _state;
    PUICVideoClip *_currentVideoClip;
    NSObject<PUICVideoClipViewControllerDelegate> *_delegate;
    float _playbackRate;
    CDUnknownBlockType _setVideoURLCompletion;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    id _periodicObserver;
    NSMutableArray *_pendingClips;
    unsigned int _requestCount;
    UIView *_topSnapshot;
    double _videoDuration;
    double _boundaryTime;
    long long _requestedSeekFrame;
}

@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *topSnapshot; // @synthesize topSnapshot=_topSnapshot;
@property(nonatomic) double boundaryTime; // @synthesize boundaryTime=_boundaryTime;
@property(retain, nonatomic) id periodicObserver; // @synthesize periodicObserver=_periodicObserver;
@property(nonatomic) int framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void)snapshotAndFadeWithDuration:(double)arg1;
- (BOOL)seekToPercentage:(float)arg1 inVideoClip:(id)arg2 canCoalesce:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)playClips:(id)arg1;
- (BOOL)playClip:(id)arg1;
- (void)setVideoURL:(id)arg1 framesPerSecond:(int)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL sentPlayerDidLoadNotification; // @synthesize sentPlayerDidLoadNotification=_sentPlayerDidLoadNotification;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void)_didReachBoundary;
@property(nonatomic) BOOL isObservingRateKey; // @synthesize isObservingRateKey=_isObservingRateKey;
@property(nonatomic) BOOL isObservingDurationKey; // @synthesize isObservingDurationKey=_isObservingDurationKey;
- (void)_seekToFrame:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long requestedSeekFrame; // @synthesize requestedSeekFrame=_requestedSeekFrame;
- (BOOL)seekToPercentageInCurrentVideoClip:(float)arg1 canCoalesce:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) PUICVideoClip *currentVideoClip; // @synthesize currentVideoClip=_currentVideoClip;
- (void)_playNextClip;
@property(retain, nonatomic) NSMutableArray *pendingClips; // @synthesize pendingClips=_pendingClips;
- (BOOL)_playerIsReady;
@property(copy, nonatomic) CDUnknownBlockType setVideoURLCompletion; // @synthesize setVideoURLCompletion=_setVideoURLCompletion;
- (void)_clearRateKeyPathObserver;
- (void)_clearDurationKeyPathObserver;
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount=_requestCount;
- (BOOL)pause;
- (BOOL)stop;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long currentFrame;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)resume;
- (void)loadView;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak NSObject<PUICVideoClipViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
@property(nonatomic) BOOL seeking; // @synthesize seeking=_seeking;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;

@end

