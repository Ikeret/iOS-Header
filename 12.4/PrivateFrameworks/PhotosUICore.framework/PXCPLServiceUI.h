//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXCPLServiceStatus;
@protocol PXCPLService, PXCPLServiceUIDelegate, PXCPLServiceUIStatus;

@interface PXCPLServiceUI : NSObject
{
    id <PXCPLService> _cplService;
    struct {
        _Bool progressDidChange;
        _Bool performAction;
    } _delegateRespondsTo;
    PXCPLServiceStatus *_serviceStatus;
    id <PXCPLServiceUIStatus> _serviceUIStatus;
    id <PXCPLServiceUIDelegate> _delegate;
}

@property(nonatomic) __weak id <PXCPLServiceUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <PXCPLServiceUIStatus> serviceUIStatus; // @synthesize serviceUIStatus=_serviceUIStatus;
@property(readonly, nonatomic) PXCPLServiceStatus *serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (void).cxx_destruct;
- (void)_handleUpdatedServiceStatus:(id)arg1;
- (void)_serviceUIStatusDidChange:(id)arg1 onlyProgressDidChange:(_Bool)arg2;
- (void)_performAction:(long long)arg1;
- (id)initWithCPLService:(id)arg1;
- (id)init;

@end

