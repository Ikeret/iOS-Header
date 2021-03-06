//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDASyncResponseConsumer-Protocol.h>

@class MFError, NSString;

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer>
{
    _Bool _success;
    NSString *_serverId;
    MFError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) MFError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
- (void)handleResponse:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

