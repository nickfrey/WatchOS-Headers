//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"
#import "NMSMessageCenterDelegate.h"
#import "SYChangeTrackingWithErrors.h"

@class NMSMessageCenter, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID, SYPersistentStore, SYRetryTimer, SYVectorClock;

@interface SYStore : NSObject <IDSServiceDelegate, NMSMessageCenterDelegate, SYChangeTrackingWithErrors>
{
    NSObject<OS_dispatch_queue> *_qosTargetQueue;
    unsigned long long _batchCounter;
    NSMutableIndexSet *_batchChunkUnackedIndices;
    BOOL _tracksChanges;
    NSMutableDictionary *_sendSignals;
    SYRetryTimer *_syncRetryTimer;
    NSObject<OS_dispatch_source> *_overflowRetryTimer;
    BOOL _deferredFullSync;
    struct {
        unsigned int delegateWillUpdate:1;
        unsigned int delegateWillUpdateWithCount:1;
        unsigned int delegateDidUpdate:1;
        unsigned int delegateDidCompleteFullSync:1;
        unsigned int delegateAllObjectsDeleted:1;
        unsigned int delegateAllObjects:1;
        unsigned int delegateShouldPerformInitialSync:1;
        unsigned int delegateBeginSyncingAllObjects:1;
        unsigned int delegateShouldDeleteOnFailedSync:1;
        unsigned int delegateErrorInFullSync:1;
        unsigned int delegateStoreEncounteredError:1;
        unsigned int delegateDidPair:1;
        unsigned int delegateDidUnpair:1;
        unsigned int delegateSentMessage:1;
        unsigned int delegatePeerProcessedMessage:1;
        unsigned int delegateSentLastSyncMessage:1;
    } _flags;
    BOOL _allowsDeletes;
    BOOL _encryptPayloads;
    BOOL _alwaysWins;
    BOOL _registeredNotificationHandlers;
    BOOL _fullSyncWasRequestedBySlave;
    id <SYStoreDelegate> _delegate;
    id <SYSerialization> _serializer;
    NSDictionary *_customIDSDeliveryOptions;
    NSString *_service;
    NSString *_databaseFileName;
    int _priority;
    SYPersistentStore *_persistentStore;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFString *_loggingFacility;
    NSUUID *_pairedDeviceID;
    NMSMessageCenter *_messageCenter;
    SYVectorClock *_vectorClock;
    CDUnknownBlockType _nextBatchStep;
}

+ (id)fullSyncActivityDictionary;
@property(nonatomic) double timeToLive;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
- (void)transaction:(CDUnknownBlockType)arg1;
- (void)deleteObject:(id)arg1;
@property(retain, nonatomic) SYPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(nonatomic) struct __CFString *loggingFacility; // @synthesize loggingFacility=_loggingFacility;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)initWithService:(id)arg1;
- (void)didEndDeltaSync;
- (void)willBeginDeltaSync;
- (void)_sendBatchChunk:(id)arg1 withState:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)_restartBatchSyncWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)_postBatchStartMessageWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)newFullSyncContext;
@property(copy, nonatomic) CDUnknownBlockType nextBatchStep; // @synthesize nextBatchStep=_nextBatchStep;
@property(retain, nonatomic) SYVectorClock *vectorClock; // @synthesize vectorClock=_vectorClock;
@property(retain, nonatomic) NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(nonatomic) BOOL alwaysWins; // @synthesize alwaysWins=_alwaysWins;
@property(nonatomic) BOOL encryptPayloads; // @synthesize encryptPayloads=_encryptPayloads;
@property(retain, nonatomic) NSString *databaseFileName; // @synthesize databaseFileName=_databaseFileName;
@property(nonatomic) BOOL allowsDeletes; // @synthesize allowsDeletes=_allowsDeletes;
@property(copy, nonatomic) NSDictionary *customIDSDeliveryOptions; // @synthesize customIDSDeliveryOptions=_customIDSDeliveryOptions;
@property(retain, nonatomic) id <SYSerialization> serializer; // @synthesize serializer=_serializer;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4;
- (void)blockingTransaction:(CDUnknownBlockType)arg1 handlingError:(CDUnknownBlockType)arg2;
- (void)blockingTransaction:(CDUnknownBlockType)arg1;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)transaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transaction:(CDUnknownBlockType)arg1 handlingError:(CDUnknownBlockType)arg2;
- (BOOL)peerState:(id)arg1 fromPeer:(id)arg2 matchesExpectationForChangeCount:(unsigned int)arg3 offsetAmount:(unsigned int *)arg4;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)setupMessageCenter;
@property(readonly, nonatomic) BOOL hasCompletedFullSync;
@property(nonatomic) unsigned int deliveryQOS;
- (void)_prefsChanged;
- (id)_batchChunkUnackedIndices;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (BOOL)deleteObject:(id)arg1 error:(id *)arg2;
- (BOOL)updateObject:(id)arg1 error:(id *)arg2;
- (BOOL)addObject:(id)arg1 error:(id *)arg2;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (BOOL)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
@property(nonatomic) BOOL fullSyncWasRequestedBySlave; // @synthesize fullSyncWasRequestedBySlave=_fullSyncWasRequestedBySlave;
- (id)encodeSYObject:(id)arg1;
- (BOOL)performBatchedSyncToCurrentDBVersion;
- (void)_postBatchEndMessageWithState:(id)arg1 error:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)performFullSyncIfNecessary;
@property(readonly, nonatomic) BOOL inDeltaSync;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (void)sendMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 idsOptions:(id)arg5;
- (void)sendChanges:(id)arg1 context:(id)arg2 options:(id)arg3 sentSignal:(id)arg4;
- (void)logChanges:(id)arg1;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(CDUnknownBlockType)arg5;
- (BOOL)_allowDeltaSyncWithContext:(id)arg1 error:(id *)arg2;
- (void)_transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(CDUnknownBlockType)arg5;
- (id)wrapMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4;
- (void)performFullSync;
- (BOOL)_shouldSkipNonSyncMessages;
- (void)processBatchSyncEnd:(unsigned long long)arg1;
- (void)processBatchChunkAtIndex:(unsigned int)arg1 encodedObjects:(id)arg2 error:(id *)arg3;
- (void)processBatchSyncStart;
- (void)remoteStoreAllObjects:(id)arg1 fromPeer:(id)arg2 clock:(id)arg3;
- (id)decodeSYObject:(id)arg1;
- (void)_syncEndedWithSyncID:(id)arg1;
- (BOOL)_shouldIgnoreSyncID:(id)arg1;
- (void)remoteStoreRequestFullSync;
- (id)newMessageHeader;
- (void)_vectorClockUpdated;
@property(nonatomic) BOOL tracksChanges;
- (void)performFullSyncIfNecessaryAskingDelegate:(BOOL)arg1;
- (void)_handleIDSOverflow;
- (void)_retrySync;
- (void)processBatchChunkAck:(unsigned int)arg1;
- (void)performFullSyncToCurrentDBVersion;
- (void)handleChangeMessage:(id)arg1;
- (void)handleBatchSyncChunk:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncEnd:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncStart:(id)arg1;
- (void)handleSyncAllObjects:(id)arg1 response:(id)arg2;
- (void)_recordLastSeqNo:(id)arg1;
- (void)handleFullSyncRequest:(id)arg1 response:(id)arg2;
- (BOOL)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (id)_pathForMessageCenterCache;
- (void)setNeedsFullSync;
- (void)postUserNotification:(id)arg1 message:(id)arg2;
- (BOOL)_isPairedWithDevice:(id)arg1;
- (BOOL)_isUsingGenericCache;
@property(nonatomic) int maxBytesInFlight;
- (BOOL)inFullSync;
- (void)_deviceUnpaired:(id)arg1;
- (void)_devicePaired:(id)arg1;
@property(nonatomic) BOOL registeredNotificationHandlers; // @synthesize registeredNotificationHandlers=_registeredNotificationHandlers;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (void)_listenForPrefsChangeNotifications;
- (void)_setupMessageCenter_LOCKED;
- (void)setupDatabase;
@property(retain, nonatomic) NSUUID *pairedDeviceID; // @synthesize pairedDeviceID=_pairedDeviceID;
- (void)setupPairingNotifications;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(int)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(int)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (void)updateObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (id)initWithBundleIdentifier:(id)arg1;
@property(readonly, nonatomic) int state;
@property(nonatomic) __weak id <SYStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addObject:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

