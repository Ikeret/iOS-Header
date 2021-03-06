//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessageHandler-Protocol.h>

@class NSString;
@protocol SXWebContentLogger;

@interface SXWebContentLogMessageHandler : NSObject <SXWebContentMessageHandler>
{
    id <SXWebContentLogger> _logger;
}

@property(readonly, nonatomic) id <SXWebContentLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)allowLogFromSecurityOrigin:(id)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

