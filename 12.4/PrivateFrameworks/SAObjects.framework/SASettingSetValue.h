//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand
{
}

+ (id)setValueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setValue;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool failOnSiriDisconnectWarnings;
@property(nonatomic) _Bool dryRun;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

