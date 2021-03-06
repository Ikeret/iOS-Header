//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDSearchableIndexService, SDConnectionConfiguration;

@interface CSIndexClientConnection : NSObject
{
    _Bool _quotaDisabled;
    SDConnectionConfiguration *_configuration;
    MDSearchableIndexService *_service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MDSearchableIndexService *service; // @synthesize service=_service;
@property(readonly, nonatomic) _Bool quotaDisabled; // @synthesize quotaDisabled=_quotaDisabled;
@property(readonly, nonatomic) SDConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)initWithConnection:(id)arg1 indexer:(id)arg2;
- (id)initWithConfiguration:(id)arg1 indexer:(id)arg2;

@end

