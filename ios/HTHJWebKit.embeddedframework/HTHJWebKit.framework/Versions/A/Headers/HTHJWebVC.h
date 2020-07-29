//
//  HTHJWebVC.h
//  HTHJWebKit
//
//  Created by xubill on 2020/7/28.
//  Copyright © 2020 xubill. All rights reserved.
//

#import "JXBWebViewController.h"
#import "WKWebViewJavascriptBridge.h"
NS_ASSUME_NONNULL_BEGIN

@interface HTHJWebVC : JXBWebViewController
/// 是否需要隐藏导航栏
@property(nonatomic, assign) BOOL needHideNav;
///  暴露js用于外部注册协议方法
@property (nonatomic, strong, readonly) WKWebViewJavascriptBridge *webViewBridge;
/// 注册方法统一入口
- (void)registCommod;

//初始化方法栈
- (instancetype)initWithURLString:(NSString *)urlString;
- (instancetype)initWithURL:(NSURL *)URL;
- (instancetype)initWithURLRequest:(NSMutableURLRequest *)request;
- (instancetype)initWithHTMLString:(NSString *)htmlString;
- (instancetype)initWithFileURL:(NSURL *)fileURL;

- (void)loadRequest:(NSURLRequest *)request;
- (void)loadPostRequest:(NSURLRequest *)request;
- (void)updateNavigationTitle;
- (void)updateNavigationItems;

//当needInterceptRequest=YES时,该方法用于拦截请求
- (void)interceptRequestWithNavigationAction:(WKNavigationAction *)navigationAction decisionHandler:(void(^)(WKNavigationActionPolicy))decisionHandler;

//设置UserAgent
- (void)syncCustomUserAgentWithType:(CustomUserAgentType)type
                    customUserAgent:(NSString *)customUserAgent;

//注册拦截的scheme和class
- (void)registerSupportProtocolWithHTTP:(BOOL)supportHTTP
                                schemes:(NSArray<NSString *> *)schemes
                          protocolClass:(Class)protocolClass;

//注销拦截的scheme和class
- (void)unregisterSupportProtocolWithHTTP:(BOOL)supportHTTP
                                  schemes:(NSArray<NSString *> *)schemes
                            protocolClass:(Class)protocolClass;

//清除所有缓存
+ (void)clearAllWebCache;
@end

NS_ASSUME_NONNULL_END
