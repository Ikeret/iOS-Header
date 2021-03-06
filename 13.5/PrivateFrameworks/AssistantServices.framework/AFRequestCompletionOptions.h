//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying>
{
    AFTriggerlessListeningOptions *_triggerlessListeningOptions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions; // @synthesize triggerlessListeningOptions=_triggerlessListeningOptions;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithShowUIDuringListening:(_Bool)arg1 playAlertBeforeListening:(_Bool)arg2;

@end

