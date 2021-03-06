//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VoiceChatSessionBeaconState : NSObject
{
    struct tagVoiceChatBeacon *lastReceivedBeacon;
    unsigned int sentState;
    unsigned int receivedState;
    _Bool needsSend;
    unsigned int typeToSend;
}

@property(nonatomic) unsigned int typeToSend; // @synthesize typeToSend;
@property(nonatomic) _Bool needsSend; // @synthesize needsSend;
@property(nonatomic) unsigned int receivedState; // @synthesize receivedState;
@property(nonatomic) unsigned int sentState; // @synthesize sentState;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon *)arg1;
- (struct tagVoiceChatBeacon *)lastReceivedBeacon;
- (void)dealloc;
- (id)init;

@end

