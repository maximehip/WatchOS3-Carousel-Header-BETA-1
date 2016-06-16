//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class UIViewController, UIViewController<CSLSwitcherViewControllerProtocol>;

@protocol CSLSwitcherViewControllerObserver
- (void)switcherViewControllerDidSettle:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1;
- (void)switcherViewControllerDidUpdate:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1;
- (void)switcherViewControllerDidDismiss:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1;
- (void)switcherViewControllerDidAppear:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1;
- (void)switcherViewControllerWillEndFastSwitching:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1;
- (void)switcherViewControllerWillBeginFastSwitching:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1;
- (void)switcherViewController:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1 viewController:(UIViewController *)arg2 atIndex:(unsigned int)arg3 didDisappear:(_Bool)arg4;
- (void)switcherViewController:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1 viewController:(UIViewController *)arg2 atIndex:(unsigned int)arg3 willDisappear:(_Bool)arg4;
- (void)switcherViewController:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1 viewController:(UIViewController *)arg2 atIndex:(unsigned int)arg3 didAppear:(_Bool)arg4;
- (void)switcherViewController:(UIViewController<CSLSwitcherViewControllerProtocol> *)arg1 viewController:(UIViewController *)arg2 atIndex:(unsigned int)arg3 willAppear:(_Bool)arg4;
@end
