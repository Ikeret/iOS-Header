//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSRemoteControlClientDelegate, OS_dispatch_queue;

@interface CSRemoteControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSRemoteControlClientDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSRemoteControlClientDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isConnected;
- (_Bool)waitingForConnection:(double)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

