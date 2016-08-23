//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>
#import <SimulatorKit/CDStructures.h>

@class NSMachPort, NSMapTable, SimDeviceFramebufferBackingStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SimDeviceFramebufferService : NSObject
{
    SimDeviceFramebufferBackingStore *_framebufferBackingStore;
    NSObject<OS_dispatch_source> *_receiveSource;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMapTable *_clientsToCallbackQueue;
    struct CGSize _requestedDeviceDimensions;
    struct CGSize _requestedScaledDimensions;
    BOOL _haveReceivedAFullFlush;
    BOOL _alwaysFlushEntireFramebuffer;
    NSMachPort *_port;
}

+ (id)framebufferServiceWithPort:(id)arg1 deviceDimensions:(struct CGSize)arg2 scaledDimensions:(struct CGSize)arg3 error:(id *)arg4;
+ (id)framebufferServiceWithName:(id)arg1 device:(id)arg2 deviceDimensions:(struct CGSize)arg3 scaledDimensions:(struct CGSize)arg4 error:(id *)arg5;
+ (id)tvOutFramebufferServiceForDevice:(id)arg1 error:(id *)arg2;
+ (id)mainScreenFramebufferServiceForDevice:(id)arg1 error:(id *)arg2;
@property (readonly, nonatomic) BOOL alwaysFlushEntireFramebuffer;
@property (retain, nonatomic) NSMachPort *port;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
- (void)requestDeviceDimensions:(struct CGSize)arg1 scaledDimensions:(struct CGSize)arg2;
- (id)_ON_EXECUTION_QUEUE_framebufferBackingStoreCreatingIfNeededWithDimensions:(struct CGSize)arg1;
- (void)_ON_EXECUTION_QUEUE_teardownFramebufferBackingStore;
- (void)_ON_RECEIVE_QUEUE_didCancelReceiveSource;
- (void)_ON_RECEIVE_QUEUE_processMachMessage:(void *)arg1;
- (BOOL)_ON_RECEIVE_QUEUE_sendReplyToRenderServer:(struct PurpleFBMessage *)arg1 error:(id *)arg2;
- (void)_ON_RECEIVE_QUEUE_processMachMessages;
- (void)_ON_EXECUTION_QUEUE_suspend;
- (void)suspend;
- (void)resume;
- (void)_sendErrorToClients:(id)arg1;
- (void)_ON_EXECUTION_QUEUE_sendSetIOSurfaceToClients:(struct __IOSurface *)arg1;
- (id)_ON_EXECUTION_QUEUE_callbackQueueForClient:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1 onQueue:(id)arg2;
- (void)assertOnExecutionQueue;
- (void)invalidate;
- (id)initWithPort:(id)arg1 receiveSource:(id)arg2 receiveQueue:(id)arg3 deviceDimensions:(struct CGSize)arg4 scaledDimensions:(struct CGSize)arg5;

@end

