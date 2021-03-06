//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSString, SAAppInfo;

@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand
{
}

+ (id)spokenNotificationFlowCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)spokenNotificationFlowCommand;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *userInterfaceIdiom;
@property(copy, nonatomic) NSString *userAgent;
@property(nonatomic) _Bool shouldPromptUser;
@property(copy, nonatomic) NSString *outputVoiceLanguageCode;
@property(copy, nonatomic) NSString *notificationID;
@property(copy, nonatomic) NSString *languageCode;
@property(retain, nonatomic) SAAppInfo *appInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

