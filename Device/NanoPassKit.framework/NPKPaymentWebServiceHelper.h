//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"
#import "PKPaymentProvisioningServiceDelegate.h"

@class IDSService, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface NPKPaymentWebServiceHelper : NSObject <IDSServiceDelegate, PKPaymentProvisioningServiceDelegate>
{
    id <NPKPaymentWebServiceHelperDelegate> _delegate;
    unsigned int _context;
    IDSService *_provisioningService;
    NSMutableDictionary *_outstandingRequests;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

+ (id)bridgedClientInfoHTTPHeader;
- (void)paymentWebServiceDidRegister:(id)arg1;
- (void)shouldArchiveBackgroundContext:(id)arg1;
- (void)shouldArchiveContext:(id)arg1;
- (id)filterVerificationChannels:(id)arg1;
- (void)setNewAuthRandomIfNecessary:(CDUnknownBlockType)arg1;
- (int)paymentSupportedInCurrentRegion;
- (void)provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configurationDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dumpLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)secureElementCardsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(CDUnknownBlockType)arg1;
- (void)deleteCardWithAID:(id)arg1;
@property(retain, nonatomic) IDSService *provisioningService; // @synthesize provisioningService=_provisioningService;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2;
- (void)_setOrResetCleanupTimerForRequest:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
- (void)preconditionNotMet:(id)arg1;
- (void)updatePushToken:(id)arg1;
- (void)updatePaymentPass:(id)arg1;
- (void)pendingRemovalResponse:(id)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)didRegisterResponse:(id)arg1;
- (void)setNewAuthRandomIfNecessaryResponse:(id)arg1;
- (void)secureElementRemoveCardsResponse:(id)arg1;
- (void)secureElementGetCardsResponse:(id)arg1;
- (void)configurationDataResponse:(id)arg1;
- (void)registrationDataResponse:(id)arg1;
- (void)provisioningDataResponse:(id)arg1;
- (void)queueTSMConnectionResponse:(id)arg1;
- (id)initWithContext:(unsigned int)arg1 responseQueue:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int context; // @synthesize context=_context;
@property(nonatomic) __weak id <NPKPaymentWebServiceHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

