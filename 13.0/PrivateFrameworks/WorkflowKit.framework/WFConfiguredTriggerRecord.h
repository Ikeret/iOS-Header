//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRecord.h>

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord
{
    _Bool _shouldPrompt;
    _Bool _enabled;
    NSData *_triggerData;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(copy, nonatomic) NSData *triggerData; // @synthesize triggerData=_triggerData;
- (void).cxx_destruct;

@end

